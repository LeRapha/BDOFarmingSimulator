#include "BGraine.h"
#include "FData.h"

BGraine::BGraine()
{
    m_sNom = "";
    m_oFruit = FData::GetFabriqueData().newFruit(DATA_JSON);
    m_oProduit = FData::GetFabriqueData().newProduit(DATA_JSON);
}


BGraine::~BGraine(){
}
