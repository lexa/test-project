#include <QApplication>
#include <QtGui>
#include "MainWindow.h"
#include "Form_Stuff_Choose.h"


int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  MainWindow *MW = new MainWindow;
  MW->show();
  return app.exec();
}
