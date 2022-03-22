#include "rectangulo.h"

Rectangulo::Rectangulo(float _base, float _altura){
   this->base = _base;
   this->altura = _altura;
   float area = calcularArea();
   float perimetro = calcularPerimetro();
   return;
}

float Rectangulo::calcularArea(){
   float area;
   area = base*altura;
   return area;
}

float Rectangulo::calcularPerimetro(){
   float perimetro;
   perimetro = base+base+altura+altura;
   return perimetro;
}

void Rectangulo::setBase(float _base){
   this->base = _base;
   return;
}

void Rectangulo::setAltura(float _altura){
   this->altura = _altura;
   return;
}

void Rectangulo::imprimirRectangulo(){
   imprimirFigura(2);
   return;
}