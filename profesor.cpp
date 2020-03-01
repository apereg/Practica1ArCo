#include "profesor.h"
#include <iostream>

Profesor::Profesor(){}

Profesor::Profesor(string nombrein, string apellidosin, string dniin){
    this->setNombre(nombrein);
    this->setApellidos(apellidosin);
    this->setDni(dniin);
}

Alumno Profesor :: getAlumno(int pos){
    return this->alumnos[pos];
}

int Profesor :: getMejorNotaMedia(){
    int pos = -1, max = 0;
    /* Se busca un alumno con 3 notas y se compara si su nota media es mayor a la anteriormente almacenada */
    for (int i = 0; i<this->nAlumnos; i++) {
        if(this->alumnos[i].getNNotas() == 3 && this->alumnos[i].getNotaMedia() >= max){
            max = this->alumnos[i].getNotaMedia();
            pos = i;
        }

    }
    /* Se devuelve la posicion en la que esta ese alumno (para poder llamar al metodo getAlumno) o -1 si no hay una mejor nota media */
    return pos;
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

void Profesor :: addAlumno(Alumno alumno){
    this->alumnos[nAlumnos] = alumno;
    nAlumnos++;
}

int Profesor :: searchAlumno(string dniin){
    for (int i = 0; i<this->nAlumnos; i++) {
        if(alumnos[i].getDni() == dniin)
            return i;
    }
    return -1;
}

void Profesor :: getResumen(){
    int i;
    cout<<"Profesor: D." << this->getNombre() << " " << this->getApellidos() << " ("<<this->getDni()<<"):\n\n";
    if(nAlumnos == 0){
        cout<<"\tEl profesor D."<<this->getNombre()<<" "<<this->getApellidos()<<" no tiene ningun alumno.\n";
        return;
    }
    /* Se llama al metodo getResumen de cada alumno */
    for (i = 0; i<nAlumnos;i++) {
        cout<<"\t";
        alumnos[i].getResumen();
        cout<<"\n";
    }
    int mejorNota = this->getMejorNotaMedia();
    if(mejorNota == -1){
        cout<<"No existe ningun alumno de "<<this->getNombre()<<" con tres notas por lo que no hay un mejor alumno\n\n";
    } else{
        cout<<"El mejor alumno de " << this->getNombre() << " es "<<this->alumnos[mejorNota].getNombre()<<" "<<this->alumnos[mejorNota].getApellidos()<<" con nota "<<this->alumnos[mejorNota].getNotaMedia()<<".\n\n";
    }

}
