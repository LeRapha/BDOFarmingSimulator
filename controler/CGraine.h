#ifndef CGraine_H
#define CGraine_H

#include "../model/BGraine.h"
#include "../model/FData.h"

class CGraine
{
private:
    BGraine* m_oGraine;
public:
    CGraine();
    QString GetInfosAllGraine();
};

#endif // CGraine_H
