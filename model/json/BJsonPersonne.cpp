#include "BJsonPersonne.h"

BJsonPersonne::BJsonPersonne(){
    const QString sFileName = JSON_FILE_PERSONNE;
    const QString sTableName = JSON_TABLE_PERSONNE;
    m_tPersonne = new BJsonTable(sFileName, sTableName);
}

BJsonPersonne::BJsonPersonne(int iId)
{
    BJsonPersonne();
    m_iId = iId;
}


void BJsonPersonne::select(){
}

vector<BData*> BJsonPersonne::selectAll(){
    vector<BData*> vPersonnes ;
    foreach (const QJsonValue & v, m_tPersonne->getTable()){
        BPersonne* oPersonne = new BJsonPersonne(v.toObject().value("ID").toInt());
        oPersonne->select();
        vPersonnes.push_back(oPersonne);
    }
    return vPersonnes;
}

void BJsonPersonne::update(){

}

void BJsonPersonne::insert(){

}

void BJsonPersonne::remove(){

}

BJsonPersonne::~BJsonPersonne(){
    delete m_tPersonne;
}

