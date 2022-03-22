#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
#include <unordered_map>

using std::unordered_map;

class Figura{
   private:
      unordered_map<float, float> listFiguras;
   public:
      void agregarFigura(float _perimetro, float _area);
      void imprimirFigura(int index);
      float sumaPerimetros();
      float sumaAreas();
};

#endif