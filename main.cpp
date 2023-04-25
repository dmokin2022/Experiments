//#include <stdlib.h>
#include <QApplication>

#include "MainWindow.hpp"
#include "SimpleAppSettings.hpp"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //a.setOrganizationName();
  MainWindow w;
  w.show();

  int b = 100;
  int c = 200;
  //std::swap();
  //std::swap(&a, &b);

  SimpleAppSettings_test();

  return a.exec();
}
