#ifndef PERSONNE_H
#define PERSONNE_H

#include "BJsonTable.h"
#include "../BPersonne.h"

#define JSON_FILE_PERSONNE "personne.json"
#define JSON_TABLE_PERSONNE "personnes"

class BJsonPersonne : public BPersonne
{
private :
    BJsonTable* m_tPersonne;
public:
    //Constructors & destructor
    BJsonPersonne();
    BJsonPersonne(int id);
    ~BJsonPersonne();

    //Inherited methods
    void select();
    void update();
    void insert();
    void remove();
    vector<BData*> selectAll();

};

#endif // PERSONNE_H
