#include "persona.h"

Persona::Persona(string nombrein, string apellidosin, string dniin){
    this->nombre = nombrein;
    this->apellidos = apellidosin;
    this->dni = dniin;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getDni(){
    return dni;
}

string Persona::getApellidos(){
    return apellidos;
}

