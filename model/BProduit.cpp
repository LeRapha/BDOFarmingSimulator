#include "BProduit.h"

QString BProduit::getNom() const
{
    return m_sNom;
}

void BProduit::setNom(const QString &sNom)
{
    m_sNom = sNom;
}

BProduit::BProduit()
{

}
