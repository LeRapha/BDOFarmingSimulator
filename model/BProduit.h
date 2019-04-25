#ifndef BPRODUIT_H
#define BPRODUIT_H

#include <QString>
#include "BData.h"

class BProduit : public BData
{
protected:
    QString m_sNom;
public:
    BProduit();

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

#endif // BPRODUIT_H
