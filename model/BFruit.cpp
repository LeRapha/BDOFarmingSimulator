#include "BFruit.h"

QString BFruit::getNom() const
{
    return m_sNom;
}

void BFruit::setNom(const QString &sNom)
{
    m_sNom = sNom;
}

BFruit::BFruit()
{

}
