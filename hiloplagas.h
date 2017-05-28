#ifndef HILOPLAGAS_H
#define HILOPLAGAS_H

#include <QThread>
#include <QMutex>
#include <random>
#include "arbolescomprados.h"
#include "estructurasTablero.h"

class HiloPlagas : public QThread
{
private:
    QMutex mutex;
    void run(void);
    int aleatorio(void);

public:
    HiloPlagas();

};

#endif // HILOPLAGAS_H
