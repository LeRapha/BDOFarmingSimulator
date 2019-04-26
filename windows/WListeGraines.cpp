#include "WListeGraines.h"
#include "ui_WListeGraines.h"

WListeGraines::WListeGraines(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WListeGraines)
{
    ui->setupUi(this);
    initListeGraines();
}

WListeGraines::~WListeGraines()
{
    delete ui;
}

void WListeGraines::initListeGraines()
{
    ui->liste_graines->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->liste_graines->setModel(&cGraine.GetModelAllGraine());
}
