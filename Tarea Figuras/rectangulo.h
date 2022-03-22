#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "figura.h"

class Rectangulo: public Figura{
   private:
      float altura;
      float base;
   public:
      Rectangulo(float, float);
      float calcularArea();
      float calcularPerimetro();
      void imprimirRectangulo();
      void setBase(float);
      void setAltura(float);
};

#endif