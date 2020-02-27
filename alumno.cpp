#include "alumno.h"
#include <iostream>

Alumno::Alumno(string nombrein, string apellidosin, string dniin):Persona(nombrein, apellidosin, dniin){}

Alumno::Alumno():Persona(){}

int Alumno :: getNota1(){
    return nota1;
}

int Alumno :: getNota2(){
    return nota2;
}

int Alumno :: getNota3(){
    return nota3;
}

float Alumno :: getNotaMedia(){
    return notaMedia;
}

void Alumno :: setNota1(int nota1in){
    nota1 = nota1in;
}

void Alumno :: setNota2(int nota1in, int nota2in){
    nota1 = nota1in;
    nota2 = nota2in;
}

void Alumno :: setNota3(int nota1in, int nota2in, int nota3in){
    nota1 = nota1in;
    nota2 = nota2in;
    nota3 = nota3in;
}

