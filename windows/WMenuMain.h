#ifndef WMAIN_H
#define WMAIN_H

#include <QMainWindow>

#include "WMenuGestionDonnees.h"

namespace Ui {
class WMenuMain;
}

class WMenuMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit WMenuMain(QWidget *parent = nullptr);
    ~WMenuMain();

private slots:
    void on_pb_data_clicked();

private:
    Ui::WMenuMain *ui;
    WMenuGestionDonnees wMenuGestionDonnees;
};

#endif // WMAIN_H
