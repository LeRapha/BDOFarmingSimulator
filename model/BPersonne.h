#ifndef PERSONNE_H
#define PERSONNE_H

#include "BData.h"

#define FILE_PERSONNE "personne.json"

class BPersonne : public BData
{
private :
    string m_sNom;
    string m_sPrenom;
    int m_iAge;
    int m_iId;
public:
    BPersonne();
    virtual void select(int id);
    virtual void update();
    virtual void insert();
    virtual void remove();
    virtual ~BPersonne();
};

#endif // PERSONNE_H
