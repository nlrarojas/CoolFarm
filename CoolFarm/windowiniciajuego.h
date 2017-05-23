#ifndef WINDOWINICIAJUEGO_H
#define WINDOWINICIAJUEGO_H

#include <QMainWindow>

namespace Ui {
class windowiniciajuego;
}

class windowiniciajuego : public QMainWindow
{
    Q_OBJECT

public:
    explicit windowiniciajuego(QWidget *parent = 0);
    ~windowiniciajuego();

private:
    Ui::windowiniciajuego *ui;
};

#endif // WINDOWINICIAJUEGO_H
