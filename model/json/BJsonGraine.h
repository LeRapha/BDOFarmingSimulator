#ifndef Graine_H
#define Graine_H

#include "BJsonTableGraine.h"
#include "../BGraine.h"

#define tGraines BJsonTableGraine::GetInstance()


class BJsonGraine : public BGraine
{
public:
    //Constructors & destructor
    BJsonGraine();
    BJsonGraine(int id, int iIdFruit, int iIdProduit);
    ~BJsonGraine();

    //Inherited methods
    void select();
    void update();
    void insert();
    void remove();
    vector<BData*>& selectAll();

};

#endif // Graine_H
