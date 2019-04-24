#include "wmain.h"
#include "ui_wmain.h"

#include "../controler/CPersonne.h"

WMain::WMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WMain)
{
    ui->setupUi(this);
    afficherInfosPersonnes();

}

WMain::~WMain()
{
    delete ui;
}

void WMain::afficherInfosPersonnes(){
    CPersonne cPersonne;
    ui->edt_infos->setPlainText(cPersonne.GetInfosAllPersonne());
}
