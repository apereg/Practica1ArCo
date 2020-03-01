#include "alumno.h"
#include <iostream>

Alumno::Alumno(string nombrein, string apellidosin, string dniin):Persona(nombrein, apellidosin, dniin){
    numNotas = 0;
    notaMedia = -1;
}

Alumno::Alumno():Persona(){
    numNotas = 0;
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

int Alumno :: getNNotas(){
    return numNotas;
}

float Alumno :: getNotaMedia(){
    if(this->numNotas == 0 ){
        /* Si no tiene notas registradas se devuelve directamente -1 */
        return -1;
    } else if (this->notaMedia == -1) {
        /* Si si tiene notas registradas pero la variable notaMedia esta sin variar de su valor inicial se devuelve el valor de calcular media */
        return this->calcularMedia();
    } else{
        /* Si hay notas registradas y la nota media esta ya calculada se devuelve este atributo del alumno */
        return this->notaMedia;
    }
}

float Alumno :: calcularMedia(){
    float aux = 0;
    /* Se suman en bucle todos las notas registradas y se devuelve ese valor entre el numero de notas */
    for (int i = 0; i<numNotas; i++) {
        aux += notas[i];
    }
    return aux / numNotas;
}

void Alumno :: setNota1(float nota1in){
    notas[0] = nota1in;
    numNotas++;
}

void Alumno :: setNota2(float nota1in, float nota2in){
    notas[0] = nota1in;
    notas[1] = nota2in;
    numNotas+=2;
}

void Alumno :: setNota3(float nota1in, float nota2in, float nota3in){
    notas[0] = nota1in;
    notas[1] = nota2in;
    notas[2] = nota3in;
    numNotas+=3;
}



void Alumno :: getResumen(){
    cout<<"Alumno "<<this->getNombre()<<" "<<this->getApellidos()<<" ("<<this->getDni()<<")\n";
    cout<<"\t- ";
    this->getNotasInfo();
}

void Alumno :: getNotasInfo(){
    if(numNotas == 0){
        cout<<"\t- El alumno no tiene notas registradas.\n";
    } else{
        for (int i = 0; i<this->numNotas; i++) {
            cout<<"Nota"<<i+1<<": "<<this->notas[i]<<", ";
        }
        cout<<endl<<"\t- Nota media: "<<this->getNotaMedia()<<".\n";
    }
}

