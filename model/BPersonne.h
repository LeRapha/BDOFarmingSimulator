#ifndef BPERSONNE_H
#define BPERSONNE_H

#include "BData.h"
#include <QString>

class BPersonne : public BData
{
protected:
    QString m_sNom;
    QString m_sPrenom;
    int m_iAge;
public:
    BPersonne();

    //Getters and setters
    QString getNom() const {return m_sNom;}
    void setNom(const QString &sNom){m_sNom = sNom;}
    QString getPrenom() const{return m_sPrenom;}
    void setPrenom(const QString &sPrenom){m_sPrenom = sPrenom;}
    int getAge() const{return m_iAge;}
    void setAge(int iAge){m_iAge = iAge;}
};

#endif // BPERSONNE_H
