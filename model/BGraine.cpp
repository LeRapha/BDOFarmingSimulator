#include "BGraine.h"
#include "FData.h"

BGraine::BGraine()
{
    m_sNom = "";
    m_oFruit = FData::GetFabriqueData().newFruit();
    m_oProduit = FData::GetFabriqueData().newProduit();
}


BGraine::~BGraine(){
}
