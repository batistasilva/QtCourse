#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pButtonAdd_clicked();

    void on_pButtonSub_clicked();

    void on_pButtonMul_clicked();

    void on_pButtonDiv_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
