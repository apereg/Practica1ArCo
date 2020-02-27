#include <iostream>
#include <profesor.h>
#include "string"

using namespace std;

void Calificando(){
    Profesor *p1 = new Profesor("Adrian", "Perez Garcia", "000000000G");
    Profesor *p2 = new Profesor("Diego", "Gonzalez Lopez", "00000000A");
    Alumno *a1 = new Alumno("Pablo", "Bayon Gonzales", "000000000H");
    p1->addAlumno(*a1);
    p1->getResumen();
    p2->getResumen();
}

int main(void){
    Calificando();
}
