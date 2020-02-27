#include "profesor.h"
#include <iostream>

Profesor::Profesor(string nombrein, string apellidosin, string dniin):Persona(nombrein, apellidosin, dniin){

}

void Profesor :: addAlumno(int pos, Alumno alumno){
    this->alumnos[pos] = alumno;
}

Alumno Profesor :: getAlumno(int pos){
    return this->alumnos[pos];
}

string Profesor :: getResume(){
    cout<<"Aqui va el resumen\n";
}

