#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <QString>

class Producto
{
private:
    QString nombre;
    double precioUnitario;
public:
    Producto(QString n, double p): nombre(n), precioUnitario(p){}

    QString getNombre()const{
        return nombre;
    }
    double getPrecio()const{
        return precioUnitario;
    }
};

#endif // PRODUCTO_H
