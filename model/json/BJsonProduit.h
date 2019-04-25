#ifndef BJSONPRODUIT_H
#define BJSONPRODUIT_H

#include "BJsonTableProduit.h"
#include "../BProduit.h"

#define tProduits BJsonTableProduit::GetInstance()

class BJsonProduit : public BProduit
{
public:
    BJsonProduit();
    BJsonProduit(int id);
    ~BJsonProduit();

    //Inherited methods
    void select();
    void update();
    void insert();
    void remove();
    vector<BData*>& selectAll();
};

#endif // BJSONPRODUIT_H
