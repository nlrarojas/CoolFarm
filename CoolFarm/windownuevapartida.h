#ifndef WINDOWNUEVAPARTIDA_H
#define WINDOWNUEVAPARTIDA_H

#include <QMainWindow>

namespace Ui {
class windownuevapartida;
}

class windownuevapartida : public QMainWindow
{
    Q_OBJECT

public:
    explicit windownuevapartida(QWidget *parent = 0);
    ~windownuevapartida();

private slots:

private:
    Ui::windownuevapartida *ui;
};

#endif // WINDOWNUEVAPARTIDA_H
