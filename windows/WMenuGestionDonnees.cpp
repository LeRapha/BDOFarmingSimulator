#include "WMenuGestionDonnees.h"
#include "ui_WMenuGestionDonnees.h"

WMenuGestionDonnees::WMenuGestionDonnees(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WMenuGestionDonnees)
{
    ui->setupUi(this);
}

WMenuGestionDonnees::~WMenuGestionDonnees()
{
    delete ui;
}

void WMenuGestionDonnees::on_pb_graines_clicked()
{
    wListeGraines.show();
}
