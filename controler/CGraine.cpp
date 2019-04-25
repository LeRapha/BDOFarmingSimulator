#include "CGraine.h"

CGraine::CGraine()
{
    m_oGraine = FData::GetFabriqueData().newGraine();
}

QString CGraine::GetInfosAllGraine(){
    QString sInfosAllGraines = "";
    vector<BData*> vGraines = m_oGraine->selectAll();
    for (BData* oData : vGraines){
        auto* oGraine = static_cast<BGraine*>(oData);
        sInfosAllGraines +=
                QString("ID : ") + QString::number(oGraine->getId()) +
                QString("Nom de la graine : ") + oGraine->getNom() +
                QString("Produit : ") + oGraine->getProduit()->getNom() +
                QString("Fruit : ") + oGraine->getFruit()->getNom() + "/";
    }
    return sInfosAllGraines;
}
