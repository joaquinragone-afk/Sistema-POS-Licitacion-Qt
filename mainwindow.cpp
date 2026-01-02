#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    catalogo["Ladrillo Rojo"] = 15.0;
    catalogo["Lamina"] = 25.0;
    catalogo["Chapa"] = 48.0;
    catalogo["Cemento"] = 12.0;
    catalogo["Arena (bolsa)"] = 8.0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString nombreIngresado = ui->txtNombre->text();
    int cantidad = ui->spinBoxPuntos->value();

    if(nombreIngresado.isEmpty()) nombreIngresado = "Cliente";

    Cliente compraActual;
    compraActual.setNombre(nombreIngresado);
    compraActual.agregarPuntos(cantidad);
    int desc = compraActual.getDescuento();

}


void MainWindow::on_btnRealizarCompra_clicked()
{
    miCliente.resetearDatos();

    ui->txtNombre->clear();
    ui->spinBoxPuntos->setValue(0);
    ui->progressBar->setValue(0);

    //ui->lblPorcentaje->setText("No obtiene descuento");

    ui->txtNombre->setFocus();
    ui->lblSubtotal->setText("Subtotal: $0.00");
    ui->lblDescuento->setText("Descuento (0%): -$0.00");
    ui->lblTotal->setText("TOTAL FINAL: $0.00");
    ui->listaDetalle->clear();
}


void MainWindow::on_Agregar_clicked()
{
    QString productoSeleccionado = ui->cbCatalogo->currentText();
    int cantidad = ui->spinBoxPuntos->value();

    if(cantidad <= 0)return;

    double precio = catalogo[productoSeleccionado];
    double subtotalItem = precio * cantidad;

    facturaActual.agregarItem(precio, cantidad);

    QString lineaTicket = QString("%1 x %2 - $%3").arg(cantidad).arg(productoSeleccionado).arg(QString::number(subtotalItem, 'f', 2));

    ui->listaDetalle->addItem(lineaTicket);

    ui->lblSubtotal->setText("Subtotal: $" + QString::number(facturaActual.getSubtotal(), 'f', 2));
    ui->lblDescuento->setText("Descuento (" + QString::number(facturaActual.getDescuentoPorcentaje()) + "%): -$" + QString::number(facturaActual.getMontoDescuento(), 'f', 2));
    ui->lblTotal->setText("TOTAL FINAL: $" + QString::number(facturaActual.getTotalFinal(), 'f', 2));

    ui->progressBar->setValue(facturaActual.getProgresoBarra());
}

