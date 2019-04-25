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
    vector<BData*>* vProduits = new vector<BData*>();
    foreach (const QJsonValue & v, tProduits.getTable()){
        BProduit* oProduit = new BJsonProduit(v.toObject().value(JSON_CHAMP_TABLE_ID).toInt());
        oProduit->select();
        vProduits->push_back(oProduit);
    }
    return *vProduits;
}

void BJsonProduit::update(){

}

void BJsonProduit::insert(){

}

void BJsonProduit::remove(){

}

BJsonProduit::~BJsonProduit(){
}
