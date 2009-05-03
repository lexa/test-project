#include <QApplication>
#include <QtGui>
#include <QFile>
#include "MainWindow.h"
#include "Form_Stuff_Choose.h"


MainWindow::MainWindow()
{
    //Инициализируем графику
    setupUi(this);
     //Создаем объект для формы
    Form_Stuff_Choose_1 = new Form_Stuff_Choose(this);
    connect(action_Exit, SIGNAL(triggered()), this, SLOT(close()));
    connect(actionAbout_QT, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    connect(action_New_Project, SIGNAL(triggered()), this, SLOT(Show_Form_Choose()));
}

void MainWindow::MainWindow_Show()
{
    this->show();
}

void MainWindow::MainWindow_Close()
{
    this->close();
}


//void MainWindow::App_Close()
//{
//    this->close();
//}


void MainWindow::Show_Form_Choose()
{
    Form_Stuff_Choose_1->show();
    this->hide();
    connect(Form_Stuff_Choose_1, SIGNAL(rejected()), this, SLOT(MainWindow_Show()));
}

