#include "MainWindow.hpp"

#include <QStyle>

#include "Icons.hpp"
#include "qdebug.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

#define STORE(x) storeItem(#x, x)

void MainWindow::storeItem(QString key, int value) { settings[key] = value; }

void MainWindow::on_pushButtonIco_clicked() {
  qDebug() << "I am here";

  int value = 1000;

  //settings["Orange"] = 2.10;
  //settings["Pear"].asMap()["Standard"] = 1.95;
  //settings["Pear"].asMap()["Organic"] = 2.25;
  //settings["Pineapple"] = 3.85;

  STORE(value);

  // Иконки см. в файле Icons.hpp
  // Иконки можно поискать на сайте https://icons8.com/icons/set/play

  //QIcon ico = style()->standardIcon(QStyle::SP_DialogSaveButton);
  //  QIcon ico = style()->standardIcon(QStyle::SP_MediaPlay);

  //  ui->pushButtonIco->setIcon(ico);
}
