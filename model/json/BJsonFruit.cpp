#include "BJsonFruit.h"

BJsonFruit::BJsonFruit(){
}

BJsonFruit::BJsonFruit(int iId)
{
    BJsonFruit();
    m_iId = iId;
}


void BJsonFruit::select(){
    foreach (const QJsonValue & v, tFruits.getTable()){
        if(v.toObject().value(JSON_CHAMP_TABLE_ID).toInt() == this->getId()){
            this->setNom(v.toObject().value(JSON_CHAMP_FRUIT_NOM).toString());
        }
    }
}

vector<BData*>& BJsonFruit::selectAll(){
    vector<BData*>* vFruits = new vector<BData*>();
    foreach (const QJsonValue & v, tFruits.getTable()){
        BFruit* oFruit = new BJsonFruit(v.toObject().value(JSON_CHAMP_TABLE_ID).toInt());
        oFruit->select();
        vFruits->push_back(oFruit);
    }
    return *vFruits;
}

void BJsonFruit::update(){

}

void BJsonFruit::insert(){

}

void BJsonFruit::remove(){

}

BJsonFruit::~BJsonFruit(){
}
