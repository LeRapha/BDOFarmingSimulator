#include "CPersonne.h"

CPersonne::CPersonne()
{
    m_oPersonne = FData::GetFabriqueData().newPersonne(DATA_JSON);
}

QString CPersonne::GetInfosAllPersonne(){
    QString sInfosAllPersonnes;
    vector<BData*> vPersonnes = m_oPersonne->selectAll();
    for (BData* oPersonne : vPersonnes){
        sInfosAllPersonnes += oPersonne->getId() + dynamic_cast<BPersonne*>(oPersonne)->getNom() + "/n";
    }
    return sInfosAllPersonnes;
}
