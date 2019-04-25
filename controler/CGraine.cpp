#include "CGraine.h"

CGraine::CGraine()
{
    m_oGraine = FData::GetFabriqueData().newGraine(DATA_JSON);
}

QString CGraine::GetInfosAllGraine(){
    QString sInfosAllGraines = "";
    vector<BData*> vGraines = m_oGraine->selectAll();
    for (BData* oGraine : vGraines){
        sInfosAllGraines += QString::number(oGraine->getId()) + dynamic_cast<BGraine*>(oGraine)->getNom() + "/n";
    }
    return sInfosAllGraines;
}
