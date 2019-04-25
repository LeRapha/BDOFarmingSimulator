#ifndef BJSONFRUIT_H
#define BJSONFRUIT_H

#include "BJsonTableFruit.h"
#include "../BFruit.h"

#define tFruits BJsonTableFruit::GetInstance()

class BJsonFruit : public BFruit
{
public:
    BJsonFruit();
    BJsonFruit(int id);
    ~BJsonFruit();

    //Inherited methods
    void select();
    void update();
    void insert();
    void remove();
    vector<BData*>& selectAll();
};

#endif // BJSONFRUIT_H
