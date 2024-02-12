#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>

using namespace std;

class Propietario {
private:
    string nombre;
    string docIdentidad;
    int edad;

public:
    Propietario(string nombre, string docIdentidad);
    void mostrarInfo();
    string getNombre();
    void setNombre(string nombre);
};

#endif
