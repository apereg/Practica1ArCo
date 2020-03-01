#include "persona.h"

Persona::Persona(){}

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

void Persona::setNombre(string nombrein){
    this->nombre = nombrein;
}

void Persona::setDni(string dniin){
    this->dni = dniin;
}

void Persona::setApellidos(string apellidosin){
    this->apellidos = apellidosin;
}
