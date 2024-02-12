#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"

using namespace std;

class Perro {
private:
    int edad;
    string nombre;
    string raza;
    string tamanio;
    string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;

public:
    Perro(int edad, string nombre, string raza, string tamanio, string color);
    ~Perro();
    void ladrar();
    Propietario *getPropietario();
    void agregarPropietario(string nombre, string docIdentidad);
    void setPropietario(Propietario *pPropietario);
    int getEdad();
    void setEdad(int edad);
    string getRaza();
    void setRaza(string raza);
    string getNombre();
    void setNombre(string nombre);
    string getTamanio();
    void setTamanio(string tamanio);
    string getColor();
    void setColor(string color);
    void asociarVeterinario(Veterinario* pVeterinario);
    Veterinario* getVeterinario();
};

#endif
