#include "BJsonGraine.h"

BJsonGraine::BJsonGraine(){
}

BJsonGraine::BJsonGraine(int iId)
{
    BJsonGraine();
    m_iId = iId;
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
        BGraine* oGraine = new BJsonGraine(v.toObject().value(JSON_CHAMP_TABLE_ID).toInt());
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
}

