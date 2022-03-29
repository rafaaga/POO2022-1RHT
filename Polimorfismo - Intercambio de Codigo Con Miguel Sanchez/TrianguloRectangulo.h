#ifndef HERENCIA_FIGURAS_TRIANGULORECTANGULO_H
#define HERENCIA_FIGURAS_TRIANGULORECTANGULO_H

#include "Figuras.h"

class TrianguloRectangulo : public Figura{
private:
    float base;
    float altura;
    float hipotenusa;
public:
    TrianguloRectangulo();
    TrianguloRectangulo( float _base, float _altura, float _hipotenusa );
    float obtenerArea() override;
    float obtenerPerimetro() override;
    void imprimirFigura()override;

};

#endif //HERENCIA_FIGURAS_TRIANGULORECTANGULO_H