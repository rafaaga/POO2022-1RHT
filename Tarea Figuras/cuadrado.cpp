#include "cuadrado.h"

Cuadrado::Cuadrado(float _lado){
   this->lado = _lado;
   float area = calcularArea();
   float perimetro = calcularPerimetro();
   return;
}

float Cuadrado::calcularArea(){
   float area;
   area = lado*lado;
   return area;
}

float Cuadrado::calcularPerimetro(){
   float perimetro;
   perimetro = lado+lado+lado+lado;
   return perimetro;
}

void Cuadrado::setLado(float _lado){
   this->lado = _lado;
   return;
}

void Cuadrado::imprimirCuadrado(){
   imprimirFigura(1);
   return;
}