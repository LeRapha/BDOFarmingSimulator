#ifndef BJSONDOCUMENT_H
#define BJSONDOCUMENT_H

#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QFile>

using namespace std;

class BJsonTable
{
private:
    QJsonDocument m_jsonDocument;
    QFile m_fDataFile;
    QJsonArray m_jsonTable;
public:
    BJsonTable(const QString sFileName, const QString sTableName);
    QJsonArray getTable();
    ~BJsonTable();

};

#endif // BJSONDOCUMENT_H
