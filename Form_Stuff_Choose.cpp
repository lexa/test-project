#include <QDialog>
#include "Form_Stuff_Choose.h"
  

Form_Stuff_Choose::Form_Stuff_Choose(QWidget *parent)
        : QDialog(parent)
{
    setupUi(this);
    connect(button_Exit, SIGNAL(clicked()), this, SLOT(MainWindow_Close()));
}

