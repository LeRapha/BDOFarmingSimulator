#include "BData.h"

int BData::getId() const
{
    return m_iId;
}

void BData::setId(int iId)
{
    m_iId = iId;
}

BData::BData()
{
    m_iId = 0;
}
