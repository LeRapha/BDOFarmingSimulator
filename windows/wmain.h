#ifndef WMAIN_H
#define WMAIN_H

#include <QMainWindow>

namespace Ui {
class WMain;
}

class WMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit WMain(QWidget *parent = nullptr);
    ~WMain();
    void afficherInfosGraines();

private:
    Ui::WMain *ui;
};

#endif // WMAIN_H
