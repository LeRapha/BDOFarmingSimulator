#include "BJsonPersonne.h"

BJsonPersonne::BJsonPersonne(){
    m_tPersonne = new BJsonTable(JSON_FILE_PERSONNE, JSON_TABLE_PERSONNE);
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

