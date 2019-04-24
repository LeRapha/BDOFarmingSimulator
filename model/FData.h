#ifndef FDATA_H
#define FDATA_H

#include "json/BJsonPersonne.h"

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

    BPersonne* newPersonne(const QString sTypeData){
        BPersonne* oPersonne = nullptr;
        if(sTypeData == DATA_JSON){
            oPersonne = new BJsonPersonne();
        }
        return  oPersonne;
    }
};

#endif // FDATA_H
