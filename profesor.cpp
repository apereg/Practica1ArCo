#include "profesor.h"
#include <iostream>

Profesor::Profesor(){}
Profesor::Profesor(string nombrein, string apellidosin, string dniin){
    this->setNombre(nombrein);
    this->setApellidos(apellidosin);
    this->setDni(dniin);
}


void Profesor :: addAlumno(Alumno alumno){
    this->alumnos[nAlumnos] = alumno;
    nAlumnos++;
}

Alumno Profesor :: getAlumno(int pos){
    return this->alumnos[pos];
}

void Profesor :: getResumen(){
    int i;
    cout<<"El teacher es " << this->getNombre() << " " << this->getApellidos() << "\n";
    for (i = 0; i<nAlumnos;i++) {
     cout<<alumnos[i].getNombre()<<" "<<alumnos->getApellidos() <<"\n";
    }
    if(nAlumnos == 0)
        cout<<"Este men no tiene alumnos\n";

}

