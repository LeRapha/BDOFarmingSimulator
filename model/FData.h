#ifndef FDATA_H
#define FDATA_H

#include "json/BJsonGraine.h"

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
};

#endif // FDATA_H
