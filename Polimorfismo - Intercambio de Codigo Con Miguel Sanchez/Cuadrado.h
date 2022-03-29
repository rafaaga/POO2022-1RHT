//
// Created by migue on 20/03/2022.
//

#ifndef HERENCIA_FIGURAS_CUADRADO_H
#define HERENCIA_FIGURAS_CUADRADO_H

#include "Figuras.h"

class Cuadrado : public Figura{
private:
    float lado;

public:
    Cuadrado();
    Cuadrado( float lado );
    float obtenerArea() override;
    float obtenerPerimetro() override;
    void imprimirFigura()override;

};

#endif //HERENCIA_FIGURAS_CUADRADO_H