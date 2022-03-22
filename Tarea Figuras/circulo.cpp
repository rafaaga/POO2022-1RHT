#include "circulo.h"

Circulo::Circulo(float _radio){
   this->radio = _radio;
   float area = calcularArea();
   float perimetro = calcularPerimetro();
   return;
}

float Circulo::calcularArea(){
   float area;
   float pi = 3.14159265359;
   area = pi*(radio*radio);
   return area;
}

float Circulo::calcularPerimetro(){
   float perimetro;
   float pi = 3.14159265359;
   perimetro = 2*pi*radio;
   return perimetro;
}

void Circulo::setRadio(float _radio){
   this->radio = _radio;
   return;
}

void Circulo::imprimirCirculo(){
   imprimirFigura(3);
   return;
}