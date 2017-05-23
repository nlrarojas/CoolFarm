/********************************************************************************
** Form generated from reading UI file 'windownuevapartida.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWNUEVAPARTIDA_H
#define UI_WINDOWNUEVAPARTIDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windownuevapartida
{
public:
    QWidget *centralwidget;
    QTabWidget *principal;
    QWidget *juego;
    QLabel *label_7;
    QWidget *opciones;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *Mercado;
    QLabel *label_107;
    QFormLayout *formLayout_15;
    QLabel *label_108;
    QLabel *label_109;
    QLabel *label_113;
    QHBoxLayout *horizontalLayout_15;
    QSpinBox *spinBox_73;
    QLabel *label_111;
    QHBoxLayout *horizontalLayout_16;
    QSpinBox *spinBox_74;
    QLabel *label_112;
    QHBoxLayout *horizontalLayout_17;
    QSpinBox *spinBox_75;
    QLabel *label_114;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *Animales;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *tipoAnimales;
    QLabel *label_5;
    QFormLayout *formLayout_13;
    QLabel *label_86;
    QLabel *label_87;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_88;
    QSpinBox *probabilidad;
    QLabel *label_89;
    QLabel *label_90;
    QLabel *label_91;
    QHBoxLayout *horizontalLayout_10;
    QSpinBox *spinBox_64;
    QLabel *label_92;
    QSpinBox *spinBox_65;
    QLabel *label_93;
    QHBoxLayout *horizontalLayout_11;
    QSpinBox *spinBox_66;
    QLabel *label_94;
    QSpinBox *spinBox_67;
    QLabel *label_95;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *Espantapajaros;
    QLabel *label_110;
    QFormLayout *formLayout_16;
    QLabel *label_115;
    QHBoxLayout *horizontalLayout_18;
    QSpinBox *spinBox_76;
    QLabel *label_116;
    QHBoxLayout *horizontalLayout_19;
    QSpinBox *spinBox_77;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *Arboles;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *tipoArboles;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QLabel *label_117;
    QSpinBox *spinBox_81;
    QLabel *label_129;
    QSpinBox *spinBox_78;
    QLabel *label_121;
    QLabel *label_2;
    QLabel *label_106;
    QSpinBox *spinBox_79;
    QLabel *label_130;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *windownuevapartida)
    {
        if (windownuevapartida->objectName().isEmpty())
            windownuevapartida->setObjectName(QStringLiteral("windownuevapartida"));
        windownuevapartida->resize(800, 650);
        centralwidget = new QWidget(windownuevapartida);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        principal = new QTabWidget(centralwidget);
        principal->setObjectName(QStringLiteral("principal"));
        principal->setGeometry(QRect(0, 0, 900, 650));
        juego = new QWidget();
        juego->setObjectName(QStringLiteral("juego"));
        label_7 = new QLabel(juego);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 0, 900, 650));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/pine_forest_by_boneswolbach-d9tshtb.png")));
        label_7->setScaledContents(true);
        principal->addTab(juego, QString());
        opciones = new QWidget();
        opciones->setObjectName(QStringLiteral("opciones"));
        label_6 = new QLabel(opciones);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 900, 650));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/pine_forest_by_boneswolbach-d9tshtb.png")));
        label_6->setScaledContents(true);
        verticalLayoutWidget_9 = new QWidget(opciones);
        verticalLayoutWidget_9->setObjectName(QStringLiteral("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(100, 250, 211, 111));
        Mercado = new QVBoxLayout(verticalLayoutWidget_9);
        Mercado->setObjectName(QStringLiteral("Mercado"));
        Mercado->setContentsMargins(0, 0, 0, 0);
        label_107 = new QLabel(verticalLayoutWidget_9);
        label_107->setObjectName(QStringLiteral("label_107"));
        label_107->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        Mercado->addWidget(label_107);

        formLayout_15 = new QFormLayout();
        formLayout_15->setObjectName(QStringLiteral("formLayout_15"));
        label_108 = new QLabel(verticalLayoutWidget_9);
        label_108->setObjectName(QStringLiteral("label_108"));
        label_108->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        formLayout_15->setWidget(0, QFormLayout::LabelRole, label_108);

        label_109 = new QLabel(verticalLayoutWidget_9);
        label_109->setObjectName(QStringLiteral("label_109"));
        label_109->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        formLayout_15->setWidget(1, QFormLayout::LabelRole, label_109);

        label_113 = new QLabel(verticalLayoutWidget_9);
        label_113->setObjectName(QStringLiteral("label_113"));
        label_113->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        formLayout_15->setWidget(2, QFormLayout::LabelRole, label_113);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        spinBox_73 = new QSpinBox(verticalLayoutWidget_9);
        spinBox_73->setObjectName(QStringLiteral("spinBox_73"));

        horizontalLayout_15->addWidget(spinBox_73);

        label_111 = new QLabel(verticalLayoutWidget_9);
        label_111->setObjectName(QStringLiteral("label_111"));
        label_111->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_15->addWidget(label_111);


        formLayout_15->setLayout(0, QFormLayout::FieldRole, horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        spinBox_74 = new QSpinBox(verticalLayoutWidget_9);
        spinBox_74->setObjectName(QStringLiteral("spinBox_74"));

        horizontalLayout_16->addWidget(spinBox_74);

        label_112 = new QLabel(verticalLayoutWidget_9);
        label_112->setObjectName(QStringLiteral("label_112"));
        label_112->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_16->addWidget(label_112);


        formLayout_15->setLayout(1, QFormLayout::FieldRole, horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        spinBox_75 = new QSpinBox(verticalLayoutWidget_9);
        spinBox_75->setObjectName(QStringLiteral("spinBox_75"));

        horizontalLayout_17->addWidget(spinBox_75);

        label_114 = new QLabel(verticalLayoutWidget_9);
        label_114->setObjectName(QStringLiteral("label_114"));
        label_114->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_17->addWidget(label_114);


        formLayout_15->setLayout(2, QFormLayout::FieldRole, horizontalLayout_17);


        Mercado->addLayout(formLayout_15);

        verticalLayoutWidget_7 = new QWidget(opciones);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(30, 90, 351, 110));
        Animales = new QVBoxLayout(verticalLayoutWidget_7);
        Animales->setObjectName(QStringLiteral("Animales"));
        Animales->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(verticalLayoutWidget_7);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        tipoAnimales = new QComboBox(verticalLayoutWidget_7);
        tipoAnimales->setObjectName(QStringLiteral("tipoAnimales"));

        horizontalLayout->addWidget(tipoAnimales);

        label_5 = new QLabel(verticalLayoutWidget_7);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);


        Animales->addLayout(horizontalLayout);

        formLayout_13 = new QFormLayout();
        formLayout_13->setObjectName(QStringLiteral("formLayout_13"));
        label_86 = new QLabel(verticalLayoutWidget_7);
        label_86->setObjectName(QStringLiteral("label_86"));
        label_86->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_86);

        label_87 = new QLabel(verticalLayoutWidget_7);
        label_87->setObjectName(QStringLiteral("label_87"));
        label_87->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        formLayout_13->setWidget(1, QFormLayout::LabelRole, label_87);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_88 = new QLabel(verticalLayoutWidget_7);
        label_88->setObjectName(QStringLiteral("label_88"));

        horizontalLayout_9->addWidget(label_88);

        probabilidad = new QSpinBox(verticalLayoutWidget_7);
        probabilidad->setObjectName(QStringLiteral("probabilidad"));

        horizontalLayout_9->addWidget(probabilidad);

        label_89 = new QLabel(verticalLayoutWidget_7);
        label_89->setObjectName(QStringLiteral("label_89"));
        label_89->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_9->addWidget(label_89);

        label_90 = new QLabel(verticalLayoutWidget_7);
        label_90->setObjectName(QStringLiteral("label_90"));

        horizontalLayout_9->addWidget(label_90);


        formLayout_13->setLayout(1, QFormLayout::FieldRole, horizontalLayout_9);

        label_91 = new QLabel(verticalLayoutWidget_7);
        label_91->setObjectName(QStringLiteral("label_91"));
        label_91->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        formLayout_13->setWidget(2, QFormLayout::LabelRole, label_91);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        spinBox_64 = new QSpinBox(verticalLayoutWidget_7);
        spinBox_64->setObjectName(QStringLiteral("spinBox_64"));

        horizontalLayout_10->addWidget(spinBox_64);

        label_92 = new QLabel(verticalLayoutWidget_7);
        label_92->setObjectName(QStringLiteral("label_92"));
        label_92->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_10->addWidget(label_92);

        spinBox_65 = new QSpinBox(verticalLayoutWidget_7);
        spinBox_65->setObjectName(QStringLiteral("spinBox_65"));

        horizontalLayout_10->addWidget(spinBox_65);

        label_93 = new QLabel(verticalLayoutWidget_7);
        label_93->setObjectName(QStringLiteral("label_93"));
        label_93->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_10->addWidget(label_93);


        formLayout_13->setLayout(0, QFormLayout::FieldRole, horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        spinBox_66 = new QSpinBox(verticalLayoutWidget_7);
        spinBox_66->setObjectName(QStringLiteral("spinBox_66"));

        horizontalLayout_11->addWidget(spinBox_66);

        label_94 = new QLabel(verticalLayoutWidget_7);
        label_94->setObjectName(QStringLiteral("label_94"));
        label_94->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_11->addWidget(label_94);

        spinBox_67 = new QSpinBox(verticalLayoutWidget_7);
        spinBox_67->setObjectName(QStringLiteral("spinBox_67"));

        horizontalLayout_11->addWidget(spinBox_67);

        label_95 = new QLabel(verticalLayoutWidget_7);
        label_95->setObjectName(QStringLiteral("label_95"));
        label_95->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_11->addWidget(label_95);


        formLayout_13->setLayout(2, QFormLayout::FieldRole, horizontalLayout_11);


        Animales->addLayout(formLayout_13);

        verticalLayoutWidget_10 = new QWidget(opciones);
        verticalLayoutWidget_10->setObjectName(QStringLiteral("verticalLayoutWidget_10"));
        verticalLayoutWidget_10->setGeometry(QRect(460, 260, 181, 83));
        Espantapajaros = new QVBoxLayout(verticalLayoutWidget_10);
        Espantapajaros->setObjectName(QStringLiteral("Espantapajaros"));
        Espantapajaros->setContentsMargins(0, 0, 0, 0);
        label_110 = new QLabel(verticalLayoutWidget_10);
        label_110->setObjectName(QStringLiteral("label_110"));
        label_110->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        Espantapajaros->addWidget(label_110);

        formLayout_16 = new QFormLayout();
        formLayout_16->setObjectName(QStringLiteral("formLayout_16"));
        label_115 = new QLabel(verticalLayoutWidget_10);
        label_115->setObjectName(QStringLiteral("label_115"));
        label_115->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        formLayout_16->setWidget(0, QFormLayout::LabelRole, label_115);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        spinBox_76 = new QSpinBox(verticalLayoutWidget_10);
        spinBox_76->setObjectName(QStringLiteral("spinBox_76"));

        horizontalLayout_18->addWidget(spinBox_76);


        formLayout_16->setLayout(0, QFormLayout::FieldRole, horizontalLayout_18);

        label_116 = new QLabel(verticalLayoutWidget_10);
        label_116->setObjectName(QStringLiteral("label_116"));
        label_116->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        formLayout_16->setWidget(1, QFormLayout::LabelRole, label_116);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        spinBox_77 = new QSpinBox(verticalLayoutWidget_10);
        spinBox_77->setObjectName(QStringLiteral("spinBox_77"));

        horizontalLayout_19->addWidget(spinBox_77);


        formLayout_16->setLayout(1, QFormLayout::FieldRole, horizontalLayout_19);


        Espantapajaros->addLayout(formLayout_16);

        verticalLayoutWidget_8 = new QWidget(opciones);
        verticalLayoutWidget_8->setObjectName(QStringLiteral("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(400, 70, 321, 156));
        Arboles = new QVBoxLayout(verticalLayoutWidget_8);
        Arboles->setObjectName(QStringLiteral("Arboles"));
        Arboles->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(verticalLayoutWidget_8);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        tipoArboles = new QComboBox(verticalLayoutWidget_8);
        tipoArboles->setObjectName(QStringLiteral("tipoArboles"));

        horizontalLayout_2->addWidget(tipoArboles);

        label_4 = new QLabel(verticalLayoutWidget_8);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);


        Arboles->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_117 = new QLabel(verticalLayoutWidget_8);
        label_117->setObjectName(QStringLiteral("label_117"));
        label_117->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(label_117, 1, 0, 1, 1);

        spinBox_81 = new QSpinBox(verticalLayoutWidget_8);
        spinBox_81->setObjectName(QStringLiteral("spinBox_81"));

        gridLayout->addWidget(spinBox_81, 2, 2, 1, 1);

        label_129 = new QLabel(verticalLayoutWidget_8);
        label_129->setObjectName(QStringLiteral("label_129"));
        label_129->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(label_129, 3, 0, 1, 1);

        spinBox_78 = new QSpinBox(verticalLayoutWidget_8);
        spinBox_78->setObjectName(QStringLiteral("spinBox_78"));

        gridLayout->addWidget(spinBox_78, 1, 2, 1, 1);

        label_121 = new QLabel(verticalLayoutWidget_8);
        label_121->setObjectName(QStringLiteral("label_121"));
        label_121->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(label_121, 2, 0, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget_8);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_106 = new QLabel(verticalLayoutWidget_8);
        label_106->setObjectName(QStringLiteral("label_106"));
        label_106->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(label_106, 0, 0, 1, 1);

        spinBox_79 = new QSpinBox(verticalLayoutWidget_8);
        spinBox_79->setObjectName(QStringLiteral("spinBox_79"));

        gridLayout->addWidget(spinBox_79, 0, 2, 1, 1);

        label_130 = new QLabel(verticalLayoutWidget_8);
        label_130->setObjectName(QStringLiteral("label_130"));
        label_130->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(label_130, 4, 0, 1, 1);

        spinBox = new QSpinBox(verticalLayoutWidget_8);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout->addWidget(spinBox, 3, 2, 1, 1);

        spinBox_2 = new QSpinBox(verticalLayoutWidget_8);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        gridLayout->addWidget(spinBox_2, 4, 2, 1, 1);


        Arboles->addLayout(gridLayout);

        principal->addTab(opciones, QString());
        windownuevapartida->setCentralWidget(centralwidget);
        menubar = new QMenuBar(windownuevapartida);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        windownuevapartida->setMenuBar(menubar);
        statusbar = new QStatusBar(windownuevapartida);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        windownuevapartida->setStatusBar(statusbar);

        retranslateUi(windownuevapartida);

        principal->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(windownuevapartida);
    } // setupUi

    void retranslateUi(QMainWindow *windownuevapartida)
    {
        windownuevapartida->setWindowTitle(QApplication::translate("windownuevapartida", "MainWindow", Q_NULLPTR));
        label_7->setText(QString());
        principal->setTabText(principal->indexOf(juego), QApplication::translate("windownuevapartida", "Juego", Q_NULLPTR));
        label_6->setText(QString());
        label_107->setText(QApplication::translate("windownuevapartida", "          Mercado", Q_NULLPTR));
        label_108->setText(QApplication::translate("windownuevapartida", "Tiempo de Apertura", Q_NULLPTR));
        label_109->setText(QApplication::translate("windownuevapartida", "Tiempo de Trabajo", Q_NULLPTR));
        label_113->setText(QApplication::translate("windownuevapartida", "Variedad de Precios", Q_NULLPTR));
        label_111->setText(QApplication::translate("windownuevapartida", "min", Q_NULLPTR));
        label_112->setText(QApplication::translate("windownuevapartida", "min", Q_NULLPTR));
        label_114->setText(QApplication::translate("windownuevapartida", "+ -", Q_NULLPTR));
        label_3->setText(QString());
        label_5->setText(QString());
        label_86->setText(QApplication::translate("windownuevapartida", "Tasa de Aparici\303\263n", Q_NULLPTR));
        label_87->setText(QApplication::translate("windownuevapartida", "Probabilidad", Q_NULLPTR));
        label_88->setText(QString());
        label_89->setText(QApplication::translate("windownuevapartida", "%", Q_NULLPTR));
        label_90->setText(QString());
        label_91->setText(QApplication::translate("windownuevapartida", "Tasa de Frutos que Come", Q_NULLPTR));
        label_92->setText(QApplication::translate("windownuevapartida", "    cada", Q_NULLPTR));
        label_93->setText(QApplication::translate("windownuevapartida", "seg", Q_NULLPTR));
        label_94->setText(QApplication::translate("windownuevapartida", "frutos cada", Q_NULLPTR));
        label_95->setText(QApplication::translate("windownuevapartida", "seg", Q_NULLPTR));
        label_110->setText(QApplication::translate("windownuevapartida", " Espanta P\303\241jaros", Q_NULLPTR));
        label_115->setText(QApplication::translate("windownuevapartida", "Costo           ", Q_NULLPTR));
        label_116->setText(QApplication::translate("windownuevapartida", "Cantidad", Q_NULLPTR));
        label->setText(QString());
        label_4->setText(QString());
        label_117->setText(QApplication::translate("windownuevapartida", "Tiempo Crecimiento", Q_NULLPTR));
        label_129->setText(QApplication::translate("windownuevapartida", "Tiempo Cosecha", Q_NULLPTR));
        label_121->setText(QApplication::translate("windownuevapartida", "Cantidad Frutos", Q_NULLPTR));
        label_2->setText(QString());
        label_106->setText(QApplication::translate("windownuevapartida", "Costo", Q_NULLPTR));
        label_130->setText(QApplication::translate("windownuevapartida", "Rango Precio por Frutos", Q_NULLPTR));
        principal->setTabText(principal->indexOf(opciones), QApplication::translate("windownuevapartida", "Opciones", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class windownuevapartida: public Ui_windownuevapartida {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWNUEVAPARTIDA_H
