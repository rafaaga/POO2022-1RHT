//
// Created by migue on 20/03/2022.
//

#ifndef HERENCIA_FIGURAS_RECTANGULO_H
#define HERENCIA_FIGURAS_RECTANGULO_H
#include "Figuras.h"
#include <dos.h>
#include <conio.h>

class Rectangulo : public Figura{
private:
    float Altura;
    float Base;
public:
    Rectangulo();
    Rectangulo( float Base, float Altura );
    float obtenerArea()override;
    float obtenerPerimetro()override;
    void imprimirFigura()override;
};

#endif //HERENCIA_FIGURAS_RECTANGULO_H
