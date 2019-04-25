#ifndef FDATA_H
#define FDATA_H

#include "json/BJsonGraine.h"
#include "json/BJsonFruit.h"
#include "json/BJsonProduit.h"

#define DATA_JSON "JSON"

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

    BGraine* newGraine(const QString sTypeData){
        BGraine* oGraine = nullptr;
        if(sTypeData == DATA_JSON){
            oGraine = new BJsonGraine();
        }
        return  oGraine;
    }

    BProduit* newProduit(const QString sTypeData){
        BProduit* oProduit = nullptr;
        if(sTypeData == DATA_JSON){
            oProduit = new BJsonProduit();
        }
        return  oProduit;
    }

    BFruit* newFruit(const QString sTypeData){
        BFruit* oFruit = nullptr;
        if(sTypeData == DATA_JSON){
            oFruit = new BJsonFruit();
        }
        return  oFruit;
    }
};

#endif // FDATA_H
