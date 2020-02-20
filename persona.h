#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <vector>

using namespace std;

/* Definición de la clase persona */
class Persona {

public:
    /* Constructor de la clase */
    Persona(string nombre, string dni);

    /* Destructor de la clase */
    ~Persona(void);

    // Relaciona el valor enumerado con el texto equivalente (string)
    string escribeClasificacion(int nota);

    /* Getters y setters */
    string getNombre();
    string getDni();

private:
    string nombre;
    string dni;
};

#endif
