#include "Propietario.h"

using namespace std;

Propietario::Propietario(string nombre, string docIdentidad) {
    this->nombre = nombre;
    this->docIdentidad = docIdentidad;
    this->edad = 0;
}

void Propietario::mostrarInfo(){
    cout << "Nombre: " << nombre << ", Documento de Identidad: " << docIdentidad << ", Edad: " << edad << endl;
}

string Propietario::getNombre(){
    return nombre;
}

void Propietario::setNombre(string nombre){
    this->nombre = nombre;
}
