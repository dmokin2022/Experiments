#include "MainWindow.hpp"

#include <QStyle>

#include "Icons.hpp"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButtonIco_clicked() {
  // Иконки см. в файле Icons.hpp
  // Иконки можно поискать на сайте https://icons8.com/icons/set/play

  //QIcon ico = style()->standardIcon(QStyle::SP_DialogSaveButton);
  QIcon ico = style()->standardIcon(QStyle::SP_MediaPlay);

  ui->pushButtonIco->setIcon(ico);
}
