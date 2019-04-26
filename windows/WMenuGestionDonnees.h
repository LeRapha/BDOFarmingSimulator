#ifndef WGESTIONDONNEES_H
#define WGESTIONDONNEES_H

#include <QWidget>

#include "WListeGraines.h"

namespace Ui {
class WMenuGestionDonnees;
}

class WMenuGestionDonnees : public QWidget
{
    Q_OBJECT

public:
    explicit WMenuGestionDonnees(QWidget *parent = nullptr);
    ~WMenuGestionDonnees();

private slots:
    void on_pb_graines_clicked();

private:
    Ui::WMenuGestionDonnees *ui;
    WListeGraines wListeGraines;
};

#endif // WGESTIONDONNEES_H
