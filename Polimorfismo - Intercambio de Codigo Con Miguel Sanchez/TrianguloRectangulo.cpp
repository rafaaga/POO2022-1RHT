#include "TrianguloRectangulo.h"

TrianguloRectangulo::TrianguloRectangulo() {
    base = 0;
    altura = 0;
    hipotenusa = 0;
}

TrianguloRectangulo::TrianguloRectangulo(float _base, float _altura, float _hipotenusa) {
    this -> base = _base;
    this -> altura = _altura;
    this -> hipotenusa = _hipotenusa;
}

float TrianguloRectangulo::obtenerArea() {
    float Area;
    Area = ((base*altura)/2);
    return Area;
}

float TrianguloRectangulo::obtenerPerimetro() {
    float Perimetro;
    Perimetro = (base+altura+hipotenusa);
    return Perimetro;
}

void TrianguloRectangulo::imprimirFigura() {
    int ast = 1;
    for(int ren=1; ren<=altura ; ren++) {
        for (int i = 1; i <= ast; i++)
        {
            printf("*");
        }
        printf("\n");
        ast = ast + 1;
    }
}