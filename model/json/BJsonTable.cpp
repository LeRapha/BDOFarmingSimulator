#include "BJsonTable.h"

BJsonTable::BJsonTable(const QString sFileName,const QString sTableName){
    m_fDataFile.setFileName(sFileName);
    if(m_fDataFile.open(QIODevice::ReadWrite | QIODevice::Text)){
        m_jsonDocument = QJsonDocument::fromJson(m_fDataFile.readAll());
        m_jsonTable = m_jsonDocument.object().value(sTableName).toArray();
    }
}

BJsonTable::~BJsonTable(){
    m_fDataFile.close();
}

QJsonArray BJsonTable::getTable(){
    return m_jsonTable;
}
