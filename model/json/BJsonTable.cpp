#include "BJsonTable.h"
#include <iostream>

BJsonTable::BJsonTable(const QString& sFileName,const QString& sTableName){
    initFile(sFileName);
    if(openFile(QIODevice::ReadOnly)){
        readTableFromFile(sTableName);
        closeFile();
    }
}

BJsonTable::~BJsonTable(){

}

void BJsonTable::initFile(const QString& sFileName){
    m_fDataFile.setFileName(sFileName);
}

bool BJsonTable::openFile(QIODevice::OpenModeFlag openMode){
    if(m_fDataFile.exists()){
        if(!m_fDataFile.isOpen()){
            if(m_fDataFile.open(openMode)){
                return true;
            }
            else{
                std::cerr << "Echec d'ouverture du fichier : " << m_fDataFile.fileName().toStdString() << endl;
                return false;
            }
        }
        else{
            std::cerr << "Fichier déjà ouvert : " << m_fDataFile.fileName().toStdString() << endl;
            return false;
        }
    }
    else{
        std::cerr << "Fichier inexistant : " << m_fDataFile.fileName().toStdString() << endl;
        return false;
    }
}


bool BJsonTable::closeFile(){
    if(m_fDataFile.isOpen()){
        m_fDataFile.close();
    }
    else{
        std::cerr << "Fichier déjà fermé : " << m_fDataFile.fileName().toStdString() << endl;
    }
    return true;
}

void BJsonTable::readTableFromFile(const QString& sTableName){
    QString jsonContent = m_fDataFile.readAll();
    QJsonParseError errJson;
    m_jsonDocument = QJsonDocument::fromJson(jsonContent.toUtf8(), &errJson);
    if(errJson.error == QJsonParseError::NoError){
        if(m_jsonDocument.isObject()){
            QJsonObject object = m_jsonDocument.object();
            m_jsonTable = object.value(sTableName).toArray();
        }else if (m_jsonDocument.isArray()) {
            QJsonArray array = m_jsonDocument.array();
            m_jsonTable = array;
        }
        else{
            cerr << "Formattage JSON incorrect. " << endl;
        }
    }
    else{
        cerr << "Erreur dans le parsing du fichier '" << m_fDataFile.fileName().toStdString() << "' : " << errJson.errorString().toStdString() << endl;
    }
}

void BJsonTable::commit(){
    this->openFile(QIODevice::WriteOnly);
    m_fDataFile.write(m_jsonDocument.toJson(QJsonDocument::JsonFormat::Indented));
    this->closeFile();
}

QJsonArray& BJsonTable::getTable(){
    return m_jsonTable;
}
