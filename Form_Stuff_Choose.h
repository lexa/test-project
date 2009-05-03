#ifndef FORM_STUFF_CHOOSE_H
#define FORM_STUFF_CHOOSE_H

#include <QDialog>
#include "ui_Form_Stuff_Choose.h"

class Form_Stuff_Choose : public QDialog, public Ui::Form_Stuff_Choose
{
    Q_OBJECT

    public:
    Form_Stuff_Choose(QWidget *parent = 0);

    public slots :
    void MainWindow_Close() {exit(1);};
//    private slots:
//    void App_Close();
};

#endif // FORM_STUFF_CHOOSE_H
