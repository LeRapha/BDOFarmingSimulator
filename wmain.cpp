#include "wmain.h"
#include "ui_wmain.h"

WMain::WMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WMain)
{
    //RMI
    ui->setupUi(this);
}

WMain::~WMain()
{
    delete ui;
}
