#ifndef EJEMPLO_PERRO_H
#define EJEMPLO_PERRO_H
#include <string>
#include <iostream>



class Perro {

public:
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    int edad;

    void ladrar();
};

#endif //EJEMPLO_PERRO_H
