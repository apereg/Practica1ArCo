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
    cout<<"Profesor: D." << this->getNombre() << " " << this->getApellidos() << " ("<<this->getDni()<<"):\n";
    if(nAlumnos == 0){
        cout<<"\tEl profesor D."<<this->getNombre()<<" "<<this->getApellidos()<<"no tiene ningun alumno.\n";
        return;
    }
    for (i = 0; i<nAlumnos;i++) {
        cout<<"\t";
     alumnos[i].getResumen();
    }

}

void Profesor :: setNota1(Alumno *alumno, float nota1in){
    int pos = this->containsAlumno(alumno);
    if(pos != -1){
        this->alumnos[pos].setNota1(nota1in);
    }

}

void Profesor :: setNota2(Alumno *alumno, float nota1in, float nota2in){
    int pos = this->containsAlumno(alumno);
    if(pos != -1){
        this->alumnos[pos].setNota2(nota1in, nota2in);
    }
}

void Profesor :: setNota3(Alumno *alumno, float nota1in, float nota2in, float nota3in){
    int pos = this->containsAlumno(alumno);
    if(pos != -1){
        this->alumnos[pos].setNota3(nota1in, nota2in, nota3in);
    }
}

int Profesor :: containsAlumno(Alumno *alumno){
    for(int i = 0; i < this->nAlumnos; i++){
        if(this->alumnos[i].getDni() == alumno->getDni())
            return i;
    }
    return -1;
}

