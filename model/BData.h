#ifndef BDATA_H
#define BDATA_H

#include <QJsonDocument>
#include <QFile>

using namespace std;

class BData : public QJsonDocument
{
    QFile m_fDataFile;
public:
    BData(const QString sFileName){
        m_fDataFile.setFileName(sFileName);
        m_fDataFile.open(QIODevice::ReadWrite | QIODevice::Text);
        this->fromJson(m_fDataFile.readAll());
    }

    virtual void select(int id) = 0;
    virtual void update() = 0;
    virtual void insert() = 0;
    virtual void remove() = 0;

    ~BData(){
        m_fDataFile.close();
    }

};

#endif // BDATA_H
