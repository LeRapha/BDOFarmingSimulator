#ifndef BGraine_H
#define BGraine_H

#include <QString>
#include "BData.h"
#include "BFruit.h"
#include "BProduit.h"

class BGraine : public BData
{
protected:
    QString m_sNom;
    BProduit m_oProduit;
    BFruit m_oFruit;
public:
    BGraine();

    //Getters and setters
    QString getNom() const {return m_sNom;}
    void setNom(const QString &sNom){m_sNom = sNom;}
};

#endif // BGraine_H
