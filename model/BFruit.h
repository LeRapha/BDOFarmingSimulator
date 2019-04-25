#ifndef BFRUIT_H
#define BFRUIT_H

#include "BData.h"
#include <QString>

class BFruit : public BData
{
protected:
    QString m_sNom;
public:
    BFruit();

    //Inherited Methods
    virtual void select() {}
    virtual std::vector<BData*>& selectAll(){}
    virtual void update(){}
    virtual void insert(){}
    virtual void remove(){}

    //Getters and setters
    QString getNom() const;
    void setNom(const QString &sNom);
};

#endif // BFRUIT_H
