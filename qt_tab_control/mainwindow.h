#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

public slots:
  void on_actionNew_triggered();
  void on_actionOpen_Tab_Dialog_triggered();
  void on_actionOpen_Tab_Too_Dialog_triggered();
  void on_actionAbout_triggered();
  void on_actionAbout_Qt_triggered();
  
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
