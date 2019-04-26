#ifndef WLISTEGRAINES_H
#define WLISTEGRAINES_H

#include <QWidget>
#include <QHeaderView>
#include "../controler/CGraine.h"

namespace Ui {
class WListeGraines;
}

class WListeGraines : public QWidget
{
    Q_OBJECT

public:
    explicit WListeGraines(QWidget *parent = nullptr);
    ~WListeGraines();

    void initListeGraines();

private:
    Ui::WListeGraines *ui;
    CGraine cGraine;
};

#endif // WLISTEGRAINES_H
