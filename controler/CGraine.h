#ifndef CGraine_H
#define CGraine_H

#include "../model/BGraine.h"
#include "../model/FData.h"

#include <QStandardItemModel>

class CGraine
{
private:
    BGraine* m_oGraine;
public:
    CGraine();
    QString GetInfosAllGraine();
    QStandardItemModel& GetModelAllGraine();
};

#endif // CGraine_H
