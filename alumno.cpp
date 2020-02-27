#include "alumno.h"
#include <iostream>

Alumno::Alumno(string nombrein, string apellidosin, string dniin):Persona(nombrein, apellidosin, dniin){

}

int Alumno :: getNota1(){
    return nota1;
}

int Alumno :: getNota2(){
    return nota2;
}

int Alumno :: getNota3(){
    return nota3;
}

int Alumno :: getNotaMedia(){
    return notaMedia;
}

void Alumno :: setNota1(int nota){
    nota1 = nota;
}

void Alumno :: setNota2(int nota){
    nota2 = nota;
}

void Alumno :: setNota3(int nota){
    nota3 = nota;
}

