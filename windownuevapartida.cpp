#include "windownuevapartida.h"
#include "ui_windownuevapartida.h"

windownuevapartida::windownuevapartida(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::windownuevapartida)
{
    ui->setupUi(this);

    QLabel * terreno[8][8];
    for (int x=0; x<8; x++){
        for (int y=0; y<8; y++){
            terreno[x][y] = new QLabel(this->ui->juego);
            terreno[x][y]->setPixmap(QPixmap(":/imagenes/tierra.png"));
            terreno[x][y]->setGeometry(x*50+50,y*50+50, 50, 50);
            terreno[x][y]->setScaledContents(true);
            terreno[x][y]->show();
        }
    }

    ui->tipoAnimales->addItem("Seleccione");
    ui->tipoAnimales->addItem("Ovejas");
    ui->tipoAnimales->addItem("Plagas");
    ui->tipoAnimales->addItem("Cuervos");
    ui->tipoArboles->addItem("Seleccione");
    ui->tipoArboles->addItem("ABB");
    ui->tipoArboles->addItem("HEAP");
    ui->tipoArboles->addItem("AVL");
    ui->tipoArboles->addItem("ROJINEGRO");

    lista = new ListaPlagas();
    lista->insertar(new plaga(0, 0, 0, 0, 0, "Cuervos"));
    lista->insertar(new plaga(0, 0, 0, 0, 0, "Ovejas"));
    lista->insertar(new plaga(0, 0, 0, 0, 0, "Plagas"));

    tiposInfoArboles = new ListaNodosArboles();
    tiposInfoArboles->insertar(new NodoInfoArbol("ABB", 0, 0, 0, 0, 0, 0));
    tiposInfoArboles->insertar(new NodoInfoArbol("HEAP", 0, 0, 0, 0, 0, 0));
    tiposInfoArboles->insertar(new NodoInfoArbol("AVL", 0, 0, 0, 0, 0, 0));
    tiposInfoArboles->insertar(new NodoInfoArbol("ROJINEGRO", 0, 0, 0, 0, 0, 0));

    infoMercado = new Mercado(0, 0, 0, 0);
    infoEspantapajaros = new Espantapajaros(0.0, 0);

    tipoPlaga = 0;
    tipoArbol = 0;
    cantidadEspantapajaros = 0;
    activo = false;

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(actualizarDatosGUI()));
    timer->start(250);
}

windownuevapartida::~windownuevapartida()
{
    delete ui;
}

void windownuevapartida::actualizarDatosGUI(){
    plaga * plagaActualizar;
    if(tipoPlaga == 1){
        plagaActualizar = lista->buscarPlaga("Ovejas");
        plagaActualizar->tasaPlagas = ui->spinBox_64->text().toInt();
        plagaActualizar->tiempo = ui->spinBox_65->text().toInt();
        plagaActualizar->probabilidad = ui->probabilidad->text().toInt();
        plagaActualizar->tasaFrutos = ui->spinBox_66->text().toInt();
        plagaActualizar->tiempoConsumeFrutos = ui->spinBox_67->text().toInt();
    }else if(tipoPlaga == 2){
        plagaActualizar = lista->buscarPlaga("Plagas");
        plagaActualizar->tasaPlagas = ui->spinBox_64->text().toInt();
        plagaActualizar->tiempo = ui->spinBox_65->text().toInt();
        plagaActualizar->probabilidad = ui->probabilidad->text().toInt();
        plagaActualizar->tasaFrutos = ui->spinBox_66->text().toInt();
        plagaActualizar->tiempoConsumeFrutos = ui->spinBox_67->text().toInt();
    }else if(tipoPlaga == 3){
        plagaActualizar = lista->buscarPlaga("Cuervos");
        plagaActualizar->tasaPlagas = ui->spinBox_64->text().toInt();
        plagaActualizar->tiempo = ui->spinBox_65->text().toInt();
        plagaActualizar->probabilidad = ui->probabilidad->text().toInt();
        plagaActualizar->tasaFrutos = ui->spinBox_66->text().toInt();
        plagaActualizar->tiempoConsumeFrutos = ui->spinBox_67->text().toInt();
    }

    NodoInfoArbol * nodoArbol;
    //Actualización valores de los arboles
    if(tipoArbol == 1){
        nodoArbol = tiposInfoArboles->buscarTipoArbol("ABB");
        nodoArbol->precio = ui->spinBox_79->text().toInt();
        nodoArbol->tiempoCrecimiento = ui->spinBox_78->text().toInt();
        nodoArbol->cantidadFrutos = ui->spinBox_81->text().toInt();
        nodoArbol->tiempoCosecha = ui->spinBox->text().toInt();
        nodoArbol->rangoInferior = ui->spinBox_3->text().toInt();
        nodoArbol->rangoSuperior = ui->spinBox_2->text().toInt();
    } else if(tipoArbol == 2){
        nodoArbol = tiposInfoArboles->buscarTipoArbol("HEAP");
        nodoArbol->precio = ui->spinBox_79->text().toInt();
        nodoArbol->tiempoCrecimiento = ui->spinBox_78->text().toInt();
        nodoArbol->cantidadFrutos = ui->spinBox_81->text().toInt();
        nodoArbol->tiempoCosecha = ui->spinBox->text().toInt();
        nodoArbol->rangoInferior = ui->spinBox_3->text().toInt();
        nodoArbol->rangoSuperior = ui->spinBox_2->text().toInt();
    } else if(tipoArbol == 3){
        nodoArbol = tiposInfoArboles->buscarTipoArbol("AVL");
        nodoArbol->precio = ui->spinBox_79->text().toInt();
        nodoArbol->tiempoCrecimiento = ui->spinBox_78->text().toInt();
        nodoArbol->cantidadFrutos = ui->spinBox_81->text().toInt();
        nodoArbol->tiempoCosecha = ui->spinBox->text().toInt();
        nodoArbol->rangoInferior = ui->spinBox_3->text().toInt();
        nodoArbol->rangoSuperior = ui->spinBox_2->text().toInt();
    } else if(tipoArbol == 4){
        nodoArbol = tiposInfoArboles->buscarTipoArbol("ROJINEGRO");
        nodoArbol->precio = ui->spinBox_79->text().toInt();
        nodoArbol->tiempoCrecimiento = ui->spinBox_78->text().toInt();
        nodoArbol->cantidadFrutos = ui->spinBox_81->text().toInt();
        nodoArbol->tiempoCosecha = ui->spinBox->text().toInt();
        nodoArbol->rangoInferior = ui->spinBox_3->text().toInt();
        nodoArbol->rangoSuperior = ui->spinBox_2->text().toInt();
    }

    infoEspantapajaros->costo = ui->spinBox_76->text().toInt();
    infoEspantapajaros->cantidadPorTerreno = ui->spinBox_77->text().toInt();

    infoMercado->tiempoAbre = ui->spinBox_73->text().toInt();
    infoMercado->tiempoAbierto = ui->spinBox_74->text().toInt();
    infoMercado->rangoInferior = ui->spinBox_75->text().toInt();
    infoMercado->rangoSuperior = ui->spinBox_4->text().toInt();

    datosMercado();
    activo = true;
}

void windownuevapartida::on_tipoAnimales_currentIndexChanged(const QString &arg1)
{
    tipoPlaga = ui->tipoAnimales->currentIndex();
    plaga * plagaBuscar;
    if(tipoPlaga == 1){
        plagaBuscar = lista->buscarPlaga("Ovejas");
        ui->spinBox_64->setValue(plagaBuscar->tasaPlagas);
        ui->spinBox_65->setValue(plagaBuscar->tiempo);
        ui->probabilidad->setValue(plagaBuscar->probabilidad);
        ui->spinBox_66->setValue(plagaBuscar->tasaFrutos);
        ui->spinBox_67->setValue(plagaBuscar->tiempoConsumeFrutos);
    }else if(tipoPlaga == 2){
        plagaBuscar = lista->buscarPlaga("Plagas");
        ui->spinBox_64->setValue(plagaBuscar->tasaPlagas);
        ui->spinBox_65->setValue(plagaBuscar->tiempo);
        ui->probabilidad->setValue(plagaBuscar->probabilidad);
        ui->spinBox_66->setValue(plagaBuscar->tasaFrutos);
        ui->spinBox_67->setValue(plagaBuscar->tiempoConsumeFrutos);
    }else if(tipoPlaga == 3){
        plagaBuscar = lista->buscarPlaga("Cuervos");
        ui->spinBox_64->setValue(plagaBuscar->tasaPlagas);
        ui->spinBox_65->setValue(plagaBuscar->tiempo);
        ui->probabilidad->setValue(plagaBuscar->probabilidad);
        ui->spinBox_66->setValue(plagaBuscar->tasaFrutos);
        ui->spinBox_67->setValue(plagaBuscar->tiempoConsumeFrutos);
    }
}

void windownuevapartida::on_tipoArboles_currentIndexChanged(const QString &arg1)
{
    tipoArbol = ui->tipoArboles->currentIndex();
    NodoInfoArbol * nodoArbol;
    if(tipoArbol == 1){
        nodoArbol = tiposInfoArboles->buscarTipoArbol("ABB");
        ui->spinBox_79->setValue(nodoArbol->precio);
        ui->spinBox_78->setValue(nodoArbol->tiempoCrecimiento);
        ui->spinBox_81->setValue(nodoArbol->cantidadFrutos);
        ui->spinBox->setValue(nodoArbol->tiempoCosecha);
        ui->spinBox_3->setValue(nodoArbol->rangoInferior);
        ui->spinBox_2->setValue(nodoArbol->rangoSuperior);
    } else if(tipoArbol == 2){
        nodoArbol = tiposInfoArboles->buscarTipoArbol("HEAP");
        ui->spinBox_79->setValue(nodoArbol->precio);
        ui->spinBox_78->setValue(nodoArbol->tiempoCrecimiento);
        ui->spinBox_81->setValue(nodoArbol->cantidadFrutos);
        ui->spinBox->setValue(nodoArbol->tiempoCosecha);
        ui->spinBox_3->setValue(nodoArbol->rangoInferior);
        ui->spinBox_2->setValue(nodoArbol->rangoSuperior);
    } else if(tipoArbol == 3){
        nodoArbol = tiposInfoArboles->buscarTipoArbol("AVL");
        ui->spinBox_79->setValue(nodoArbol->precio);
        ui->spinBox_78->setValue(nodoArbol->tiempoCrecimiento);
        ui->spinBox_81->setValue(nodoArbol->cantidadFrutos);
        ui->spinBox->setValue(nodoArbol->tiempoCosecha);
        ui->spinBox_3->setValue(nodoArbol->rangoInferior);
        ui->spinBox_2->setValue(nodoArbol->rangoSuperior);
    } else if(tipoArbol == 4){
        nodoArbol = tiposInfoArboles->buscarTipoArbol("ROJINEGRO");
        ui->spinBox_79->setValue(nodoArbol->precio);
        ui->spinBox_78->setValue(nodoArbol->tiempoCrecimiento);
        ui->spinBox_81->setValue(nodoArbol->cantidadFrutos);
        ui->spinBox->setValue(nodoArbol->tiempoCosecha);
        ui->spinBox_3->setValue(nodoArbol->rangoInferior);
        ui->spinBox_2->setValue(nodoArbol->rangoSuperior);
    }
}

void windownuevapartida::datosMercado(){
    ui->lineEdit_costo_espantapajaros->setText(QString::number(infoEspantapajaros->costo));
    ui->label_cantidad_espantapajaros->setText("Cantidad: " + QString::number(cantidadEspantapajaros) + "/" + QString::number(infoEspantapajaros->cantidadPorTerreno));

    NodoInfoArbol * abb = tiposInfoArboles->buscarTipoArbol("ABB");
    NodoInfoArbol * avl = tiposInfoArboles->buscarTipoArbol("AVL");
    NodoInfoArbol * heap = tiposInfoArboles->buscarTipoArbol("HEAP");
    NodoInfoArbol * rojinegro = tiposInfoArboles->buscarTipoArbol("ROJINEGRO");

    ui->lineEdit_costo_abb->setText(QString::number(abb->precio));
    ui->lineEdit_crece_abb->setText(QString::number(abb->tiempoCrecimiento));

    ui->lineEdit_costo_avl->setText(QString::number(avl->precio));
    ui->lineEdit_crece_avl->setText(QString::number(avl->tiempoCrecimiento));

    ui->lineEdit_costo_heap->setText(QString::number(heap->precio));
    ui->lineEdit_crece_heap->setText(QString::number(heap->tiempoCrecimiento));

    ui->lineEdit_costo_rojinegro->setText(QString::number(rojinegro->precio));
    ui->lineEdit_crece_rojinegro->setText(QString::number(rojinegro->tiempoCrecimiento));
}
