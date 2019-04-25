#include "BJsonGraine.h"

BJsonGraine::BJsonGraine(){
}

BJsonGraine::BJsonGraine(int iId, int iIdFruit, int iIdProduit)
{
    BJsonGraine();
    m_iId = iId;
    m_oFruit->setId(iIdFruit);
    m_oProduit->setId(iIdProduit);
    m_oFruit->select();
    m_oProduit->select();
}


void BJsonGraine::select(){
    foreach (const QJsonValue & v, tGraines.getTable()){
        if(v.toObject().value(JSON_CHAMP_TABLE_ID).toInt() == this->getId()){
            this->setNom(v.toObject().value(JSON_CHAMP_GRAINE_NOM).toString());
        }
    }
}

vector<BData*>& BJsonGraine::selectAll(){
    vector<BData*>* vGraines = new vector<BData*>();
    foreach (const QJsonValue & v, tGraines.getTable()){
        int iID, iIdProduit, iIdFruit;
        iID = v.toObject().value(JSON_CHAMP_TABLE_ID).toInt();
        iIdFruit = v.toObject().value(JSON_CHAMP_GRAINE_ID_FRUIT).toInt();
        iIdProduit = v.toObject().value(JSON_CHAMP_GRAINE_ID_PRODUIT).toInt();
        BGraine* oGraine = new BJsonGraine(iID, iIdFruit, iIdProduit);
        oGraine->select();
        vGraines->push_back(oGraine);
    }
    return *vGraines;
}

void BJsonGraine::update(){

}

void BJsonGraine::insert(){

}

void BJsonGraine::remove(){

}

BJsonGraine::~BJsonGraine(){
    delete m_oFruit;
    delete m_oProduit;
}

