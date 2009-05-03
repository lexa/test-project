#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QDialog>

#include "ui_MainWindow.h"
#include "ui_Form_Stuff_Choose.h"

class Form_Stuff_Choose;

class MainWindow : public QMainWindow, public Ui::MainWindowClass
{
Q_OBJECT

public:
  MainWindow();

private:
  Ui::MainWindowClass ui;
  Form_Stuff_Choose* Form_Stuff_Choose_1;

private slots:
    void Show_Form_Choose();
    void MainWindow_Show();
    void MainWindow_Close();
//    void App_Close();


};
#endif
