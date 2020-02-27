#include "profesor.h"
#include <iostream>

Profesor::Profesor(string nombrein, string apellidosin, string dniin):Persona(nombrein, apellidosin, dniin){
}

void Profesor :: addAlumno(Alumno alumno){
    cout<<"Se entra al addalumno\n";
    this->alumnos[nAlumnos] = alumno;
    cout<<"Se anyadio el alumno\n";
    nAlumnos++;
}

Alumno Profesor :: getAlumno(int pos){
    return this->alumnos[pos];
}

void Profesor :: getResume(){
    cout<<"Aqui va el resumen\n";
    int i;
    for (i = 0; i<nAlumnos;i++) {
     cout<<alumnos[i].getNombre();
    }

}

