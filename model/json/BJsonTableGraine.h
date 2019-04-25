#ifndef BJSONTABLEPEROSNNE_H
#define BJSONTABLEPEROSNNE_H

#include "BJsonTable.h"


#define JSON_FILE_GRAINE ":/tables/Graine"
#define JSON_TABLE_GRAINE "Graines"

#define JSON_CHAMP_GRAINE_NOM "Nom"
#define JSON_CHAMP_GRAINE_BONUS_TEMP "BonusTemperature"
#define JSON_CHAMP_GRAINE_BONUS_HUM "BonusHumidite"
#define JSON_CHAMP_GRAINE_BONUS_NAP "BonusNappe"
#define JSON_CHAMP_GRAINE_BONUS_INTERV_MIN "IntervalleMin"
#define JSON_CHAMP_GRAINE_BONUS_INTERV_MAX "IntervalleMax"
#define JSON_CHAMP_GRAINE_BONUS_VAL "Bonus"
#define JSON_CHAMP_GRAINE_ID_FRUIT "IDFruit"
#define JSON_CHAMP_GRAINE_ID_PRODUIT "IDProduit"

class BJsonTableGraine : public BJsonTable
{
private:
    BJsonTableGraine() : BJsonTable(JSON_FILE_GRAINE, JSON_TABLE_GRAINE) {}
    BJsonTableGraine(BJsonTableGraine const&);
    void operator=(BJsonTableGraine const&);

public:
    static BJsonTableGraine& GetInstance(){
        static BJsonTableGraine instance;
        return instance;
    }
};

#endif // BJSONTABLEPEROSNNE_H
