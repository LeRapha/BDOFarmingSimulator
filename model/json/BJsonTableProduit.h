#ifndef BJSONTABLEPRODUIT_H
#define BJSONTABLEPRODUIT_H

#include "BJsonTable.h"


#define JSON_FILE_PRODUIT ":/tables/Produit"
#define JSON_TABLE_PRODUIT "Fruits"

#define JSON_CHAMP_PRODUIT_NOM "Nom"

class BJsonTableProduit : public BJsonTable
{
private:
    BJsonTableProduit() : BJsonTable(JSON_FILE_PRODUIT, JSON_TABLE_PRODUIT) {}
    BJsonTableProduit(BJsonTableProduit const&);
    void operator=(BJsonTableProduit const&);

public:
    static BJsonTableProduit& GetInstance(){
        static BJsonTableProduit instance;
        return instance;
    }
};

#endif // BJSONTABLEPRODUIT_H
