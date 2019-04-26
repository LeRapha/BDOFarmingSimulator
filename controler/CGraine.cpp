#include "CGraine.h"

CGraine::CGraine()
{
    m_oGraine = FData::GetFabriqueData().newGraine();
}

QString CGraine::GetInfosAllGraine(){
    QString sInfosAllGraines = "";
    vector<BData*> vGraines = m_oGraine->selectAll();
    for (BData* oData : vGraines){
        auto* oGraine = static_cast<BGraine*>(oData);
        sInfosAllGraines +=
                QString("ID : ") + QString::number(oGraine->getId()) +
                QString("Nom de la graine : ") + oGraine->getNom() +
                QString("Produit : ") + oGraine->getProduit()->getNom() +
                QString("Fruit : ") + oGraine->getFruit()->getNom() + "/";
    }
    return sInfosAllGraines;
}

QStandardItemModel& CGraine::GetModelAllGraine(){
    QStandardItemModel* graineModel = new QStandardItemModel();
    int row = 0;
    vector<BData*> vGraines = m_oGraine->selectAll();

    QStringList listeChamps;
    listeChamps.append("ID");
    listeChamps.append("Nom");
    listeChamps.append("Produit");
    listeChamps.append("Fruit");
    graineModel->setHorizontalHeaderLabels(listeChamps);

    for (BData* oData : vGraines){
        auto* oGraine = static_cast<BGraine*>(oData);
        graineModel->setItem(row, 0, new QStandardItem(QString::number(oGraine->getId())));
        graineModel->setItem(row, 1, new QStandardItem(oGraine->getNom()));
        graineModel->setItem(row, 2, new QStandardItem(oGraine->getProduit()->getNom()));
        graineModel->setItem(row, 3, new QStandardItem(oGraine->getFruit()->getNom()));
        ++row;
    }
    return *graineModel;
}
