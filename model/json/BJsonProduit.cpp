#include "BJsonProduit.h"

BJsonProduit::BJsonProduit()
{

}

BJsonProduit::BJsonProduit(int iId)
{
    BJsonProduit();
    m_iId = iId;
}


void BJsonProduit::select(){
    foreach (const QJsonValue & v, tProduits.getTable()){
        if(v.toObject().value(JSON_CHAMP_TABLE_ID).toInt() == this->getId()){
            this->setNom(v.toObject().value(JSON_CHAMP_PRODUIT_NOM).toString());
        }
    }
}

vector<BData*>& BJsonProduit::selectAll(){
    vector<BData*>* vGraines = new vector<BData*>();
    foreach (const QJsonValue & v, tProduits.getTable()){
        BProduit* oGraine = new BJsonProduit(v.toObject().value(JSON_CHAMP_TABLE_ID).toInt());
        oGraine->select();
        vGraines->push_back(oGraine);
    }
    return *vGraines;
}

void BJsonProduit::update(){

}

void BJsonProduit::insert(){

}

void BJsonProduit::remove(){

}

BJsonProduit::~BJsonProduit(){
}
