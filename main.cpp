#include <iostream>
#include <profesor.h>
#include "string"

using namespace std;

void Calificando(){
    Profesor *p1 = new Profesor("Adrián", "Pérez García", "000000000G");
    cout<<"1";
    Profesor *p2 = new Profesor("Diego", "González López", "00000000A");
    cout<<"2";
    Alumno *a1 = new Alumno("Pablo", "Bayon Gonzales", "000000000H");
    cout<<"3";
    p1->addAlumno(*a1);
    cout<<"4";
    p1->getResume();
    cout<<"5";
    p2->getResume();
}

int main(void){
    Calificando();
}
