#include "calculator.h"
#include "ui_calculator.h"
#include "QDebug"
#include "QStringList"
#include "QShortcut"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    connect(ui->appliedFeatured, SIGNAL(colorSignal(int)), this, SLOT(colorSlot(int)));
    connect(ui->numbers, SIGNAL(numberBtn(QString)), ui->display, SLOT(showingNumbers(QString)));
    connect(ui->numbers, SIGNAL(decBtnSignal(QString)), ui->display, SLOT(decBtnSetter(QString)));
    connect(ui->numbers, SIGNAL(numberBtnPosNeg()), ui->display, SLOT(posNegNumbers()));
    connect(ui->mainOperators, SIGNAL(cEmit()), ui->display, SLOT(cSlot()));
    connect(ui->mainOperators, SIGNAL(equalSignal()), ui->display, SLOT(equalSlot()));
    connect(ui->mainOperators, SIGNAL(inverseSignal()), ui->display, SLOT(inverseSlot()));
    connect(ui->mainOperators, SIGNAL(rootSignal()), ui->display, SLOT(rootSlot()));
    connect(ui->mainOperators, SIGNAL(centSignal()), ui->display, SLOT(centSlot()));
    connect(ui->mainOperators, SIGNAL(squareSignal()), ui->display, SLOT(squareSlot()));
    connect(ui->mainOperators, SIGNAL(showMainOperators(QString)),
            ui->display, SLOT(mainOperatorShow(QString)));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::colorSlot(int index)
{
    QPalette pal = this->palette();

     // set black background
     pal.setColor(QPalette::Background, Qt::black);
     this->setAutoFillBackground(true);
     this->setPalette(pal);
     this->show();

    switch (index) {
    case 0:
        pal.setColor(QPalette::Background, Qt::white);
        this->setAutoFillBackground(true);
        this->setPalette(pal);
        this->show();
        break;
    case 1:
        pal.setColor(QPalette::Background, Qt::green);
        this->setAutoFillBackground(true);
        this->setPalette(pal);
        this->show();
        break;
    case 2:
        pal.setColor(QPalette::Background, Qt::red);
        this->setAutoFillBackground(true);
        this->setPalette(pal);
        this->show();
        break;
    case 3:
        pal.setColor(QPalette::Background, Qt::blue);
        this->setAutoFillBackground(true);
        this->setPalette(pal);
        this->show();
        break;
    default:
        break;
    }

}

