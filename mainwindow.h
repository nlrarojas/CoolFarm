#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "windownuevapartida.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    public slots:
        void openNewWindow();

private slots:
        void on_botonNuevaPartida_clicked();

private:
        windownuevapartida * mywindownuevapartida;

    private:
        Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
