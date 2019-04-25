#ifndef FDATA_H
#define FDATA_H

#include "json/BJsonGraine.h"
#include "json/BJsonFruit.h"
#include "json/BJsonProduit.h"


#define DATA_JSON "JSON"
#define DATA_MYSQL "MYSQL"

#define TYPE_DATA DATA_JSON

using namespace std;

class FData
{
private:
    FData() {}
    FData(FData const&);
    void operator=(FData const&);

public:
    static FData& GetFabriqueData(){
        static FData instance;
        return instance;
    }

    BGraine* newGraine(){
        BGraine* oGraine = nullptr;
        if(QString(TYPE_DATA) == QString(DATA_JSON)){
            oGraine = new BJsonGraine();
        }
        return  oGraine;
    }

    BProduit* newProduit(){
        BProduit* oProduit = nullptr;
        if(QString(TYPE_DATA) == QString(DATA_JSON)){
            oProduit = new BJsonProduit();
        }
        return  oProduit;
    }

    BFruit* newFruit(){
        BFruit* oFruit = nullptr;
        if(QString(TYPE_DATA) == (DATA_JSON)){
            oFruit = new BJsonFruit();
        }
        return  oFruit;
    }
};

#endif // FDATA_H
