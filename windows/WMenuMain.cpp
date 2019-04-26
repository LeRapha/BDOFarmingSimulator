#include "WMenuMain.h"
#include "ui_WMenuMain.h"


WMenuMain::WMenuMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WMenuMain)
{
    ui->setupUi(this);

}

WMenuMain::~WMenuMain()
{
    delete ui;
}

void WMenuMain::on_pb_data_clicked()
{
    wMenuGestionDonnees.show();
}
