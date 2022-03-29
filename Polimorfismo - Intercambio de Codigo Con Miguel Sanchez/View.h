//
// Created by migue on 20/03/2022.
//

#ifndef HERENCIA_FIGURAS_VIEW_H
#define HERENCIA_FIGURAS_VIEW_H

#include "Figuras.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include "TrianguloRectangulo.h"

class View{
private:
    vector<Figura*>Figuras;
public:
    View();
    void menu();
    void agregarCirculo();
    void agregarCuadrado();
    void agregarRectangulo();
    void agregarTriangulo();
    void imprimirFiguras();
    void mostrarAreas(); //muestra todas las areas y la suma de estas
    void mostrarPerimetros();
    void combinarReferencias();
    ~View(); //destructor
};

#endif //HERENCIA_FIGURAS_VIEW_H