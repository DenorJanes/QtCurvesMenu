#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnAstroid_clicked();

    void on_btnHuygens_clicked();

    void on_Cycloid_clicked();

    void on_btnHypo_clicked();

    void on_spinScale_valueChanged(double arg1);

    void update_ui();

    void on_spinInterval_valueChanged(double arg1);

    void on_spinStepCount_valueChanged(int arg1);

    void on_btnBackground_clicked();

    void on_btnShapeColor_clicked();

    void on_btnFancy_clicked();

    void on_btnStarfish_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
