#ifndef BJSONDOCUMENT_H
#define BJSONDOCUMENT_H

#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QFile>

using namespace std;

#define JSON_CHAMP_TABLE_ID "ID"

class BJsonTable
{
private:
    QJsonDocument m_jsonDocument;
    QFile m_fDataFile;
    QJsonArray m_jsonTable;
public:
    BJsonTable(const QString& sFileName, const QString& sTableName);
    QJsonArray& getTable();
    ~BJsonTable();
    void readTableFromFile(const QString& sTableName);
    void initFile(const QString&);
    bool openFile(QIODevice::OpenModeFlag openMode);
    bool closeFile();
    void commit();
};

#endif // BJSONDOCUMENT_H
