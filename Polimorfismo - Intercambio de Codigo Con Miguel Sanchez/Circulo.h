//
// Created by migue on 20/03/2022.
//

#ifndef HERENCIA_FIGURAS_CIRCULO_H
#define HERENCIA_FIGURAS_CIRCULO_H

#include "Figuras.h"

class Circulo : public Figura{
private:
    float radio;
public:
    Circulo();
    Circulo( float radio );
    float obtenerArea()override;
    float obtenerPerimetro()override;
    void imprimirFigura()override;

};

#endif //HERENCIA_FIGURAS_CIRCULO_H
