#ifndef CPERSONNE_H
#define CPERSONNE_H

#include "../model/BPersonne.h"
#include "../model/FData.h"

class CPersonne
{
private:
    BPersonne* m_oPersonne;
public:
    CPersonne();
    QString GetInfosAllPersonne();
};

#endif // CPERSONNE_H
