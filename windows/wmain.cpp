#include "wmain.h"
#include "ui_wmain.h"

#include "../controler/CGraine.h"

WMain::WMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WMain)
{
    ui->setupUi(this);
    afficherInfosGraines();

}

WMain::~WMain()
{
    delete ui;
}

void WMain::afficherInfosGraines(){
    CGraine cGraine;
    ui->edt_infos->setPlainText(cGraine.GetInfosAllGraine());
}
