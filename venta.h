#ifndef VENTA_H
#define VENTA_H

#include "producto.h"
#include <vector>

class Venta
{
private:
    double subtotal;
    int unidadesTotales;
    int descuento;
public:
    Venta() : subtotal(0.0),unidadesTotales(0),descuento(0) {}

    void agregarItem(double precioUnitario, int cantidad) {
        unidadesTotales += cantidad;
        subtotal += (precioUnitario * cantidad);

        //lógica de negocio: 1% cada 100 unidades
        descuento = unidadesTotales / 100;
        if (descuento > 50) descuento = 50;
    }

    // Getters para la UI
    double getSubtotal() const { return subtotal; }
    int getDescuentoPorcentaje() const { return descuento; }
    int getUnidades() const { return unidadesTotales; }

    double getMontoDescuento() const {
        return subtotal * (descuento / 100.0);
    }

    double getTotalFinal() const {
        return subtotal - getMontoDescuento();
    }

    int getProgresoBarra() const {
        return unidadesTotales % 100;
    }
};

#endif // VENTA_H
