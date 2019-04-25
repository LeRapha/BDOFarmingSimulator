#ifndef BJSONTABLEFRUIT_H
#define BJSONTABLEFRUIT_H

#include "BJsonTable.h"


#define JSON_FILE_FRUIT ":/tables/Fruit"
#define JSON_TABLE_FRUIT "Fruits"

#define JSON_CHAMP_FRUIT_NOM "Nom"

class BJsonTableFruit : public BJsonTable
{
private:
    BJsonTableFruit() : BJsonTable(JSON_FILE_FRUIT, JSON_TABLE_FRUIT) {}
    BJsonTableFruit(BJsonTableFruit const&);
    void operator=(BJsonTableFruit const&);

public:
    static BJsonTableFruit& GetInstance(){
        static BJsonTableFruit instance;
        return instance;
    }
};

#endif // BJSONTABLEFRUIT_H
