#ifndef CIRCULO_H
#define CIRCULO_H

#include "figura.h"

class Circulo: public Figura{
   private:
      float radio;
   public:
      Circulo(float);
      float calcularArea();
      float calcularPerimetro();
      void imprimirCirculo();
      void setRadio(float);
};

#endif