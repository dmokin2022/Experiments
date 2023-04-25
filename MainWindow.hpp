#pragma once

#include <qmap.h>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

  void storeItem(QString key, int value);
  QMap<QString, QVariant> settings;

private slots:
  void on_pushButtonIco_clicked();

private:
  Ui::MainWindow *ui;
};
