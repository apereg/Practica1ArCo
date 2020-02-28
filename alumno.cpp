#include "alumno.h"
#include <iostream>

Alumno::Alumno(string nombrein, string apellidosin, string dniin):Persona(nombrein, apellidosin, dniin){
    nNotas = 0;
    notaMedia = -1;
}

Alumno::Alumno():Persona(){
    nNotas = 0;
    notaMedia = -1;
}

float Alumno :: getNota1(){
    return notas[0];
}

float Alumno :: getNota2(){
    return notas[1];
}

float Alumno :: getNota3(){
    return notas[2];
}

float Alumno :: getNotaMedia(){
    if(this->nNotas == 0 ){
        return -1;
    } else if (this->notaMedia == -1) {
        return this->calcularMedia();
    } else{
        return this->notaMedia;
    }
}

float Alumno :: calcularMedia(){
    float aux = 0;
    for (int i = 0; i<nNotas; i++) {
        aux += notas[i];
    }

    return aux / nNotas;
}

int Alumno :: getNNotas(){
    return nNotas;
}

void Alumno :: setNota1(float nota1in){
    notas[0] = nota1in;
    nNotas++;
}

void Alumno :: setNota2(float nota1in, float nota2in){
    notas[0] = nota1in;
    notas[1] = nota2in;
    nNotas+=2;
}

void Alumno :: setNota3(float nota1in, float nota2in, float nota3in){
    notas[0] = nota1in;
    notas[1] = nota2in;
    notas[2] = nota3in;
    nNotas+=3;
}

void Alumno :: getNotasInfo(){
    if(nNotas == 0){
        cout<<"El alumno no tiene notas registradas.\n";
    } else{
        for (int i = 0; i<this->nNotas; i++) {
            cout<<"Nota"<<i+1<<": "<<this->notas[i]<<", ";
        }
        cout<<"Nota media: "<<this->getNotaMedia()<<".\n";
    }
}

void Alumno :: getResumen(){
    cout<<"Alumno "<<this->getNombre()<<" "<<this->getApellidos()<<" ("<<this->getDni()<<")\n";
    cout<<"\t\tNotas: ";
    this->getNotasInfo();
    cout<<"\n";
}


