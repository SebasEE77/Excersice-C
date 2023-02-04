#include <iostream>
#include "Perro.h"

int main() {

    Perro firulais;
    Perro luna;
    Perro juana;

    firulais.nombre = "firulais";
    firulais.color = "Negro";
    firulais.edad = 3;
    firulais.tamanio = "Grande";

    std::cout << "Que ladre" << std::endl;
    firulais.ladrar();
    return 0;
}