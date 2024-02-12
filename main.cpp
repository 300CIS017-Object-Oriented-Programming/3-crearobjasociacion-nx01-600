#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Veterinario.h"

using namespace std;

int main() {
    Raza mastinNapolitano("Mastin Napolitano", "Italia");
    Raza maltes("Maltes", "Italia");

    Perro firulais(5, "Firulais", "Mastin Napolitano", "Grande", "Negro");
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    Veterinario veterinarioFirulais("Dr. Pérez", 10);
    firulais.asociarVeterinario(&veterinarioFirulais);

    cout << "Nombre del Perro: " << firulais.getNombre() << endl;
    cout << "Raza del Perro: " << firulais.getRaza() << endl;
    cout << "Propietario: " << firulais.getPropietario()->getNombre() << endl;

    cout << "Veterinario del Perro: " << firulais.getVeterinario()->getNombre() << endl;
    cout << "Años de Experiencia del Veterinario: " << firulais.getVeterinario()->getAniosExperiencia() << endl;

    return 0;
}
