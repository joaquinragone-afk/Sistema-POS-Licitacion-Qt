#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>

class Cliente
{
private:
    QString nombre;
    int puntos;
    int descuento;
public:
    Cliente(): nombre("anonimo"),puntos(0),descuento(0){}

    void setNombre(QString n){
        nombre=n;
    }

    QString getNombre()const{
        return nombre;
    }

    void agregarPuntos(int cantidad){
        if(cantidad <= 0)return;

        puntos = cantidad;
        descuento = puntos/100;

        if(descuento > 50) {
            descuento = 50;
        }
    }

    int getPuntos()const{
        return puntos;
    }
    int getPuntosCiclo()const{
        return puntos % 100;// Para la barra de progreso (0-100)
    }
    int getDescuento()const{
        return descuento;
    }

    void resetearDatos() {
        puntos = 0;
        descuento = 0;
        nombre = "Anónimo";
    }
};

#endif // CLIENTE_H
