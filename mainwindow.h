#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cliente.h"
#include "venta.h"
#include <QMap>

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

private slots:
    void on_pushButton_clicked();

    void on_btnRealizarCompra_clicked();

    void on_Agregar_clicked();

private:
    Ui::MainWindow *ui;
    Cliente miCliente;
    Venta facturaActual;
    QMap<QString, double> catalogo;
};
#endif // MAINWINDOW_H
