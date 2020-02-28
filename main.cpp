#include <iostream>
#include <profesor.h>
#include "string"

using namespace std;

void Calificando(){
    Profesor *p1 = new Profesor("Adrian", "Perez Garcia", "000000000G");
    Profesor *p2 = new Profesor("Diego", "a a", "00000000A");
    Profesor *p3 = new Profesor("Sergio", "v v", "00000000Y");
    Alumno *a1 = new Alumno("Pablo", "b b", "000000000H");
    Alumno *a2 = new Alumno("Juan", "h h", "000000000D");
    Alumno *a3 = new Alumno("Ruben", "z z", "000000000Z");
    p1->addAlumno(*a1);
    p1->addAlumno(*a2);
    p2->addAlumno(*a3);
    p1->setNota2(a1, 9.0, 5.0);
    cout<<"------------------------------------ RESUMEN APP ------------------------------------\n\n";
    p1->getResumen();
    p2->getResumen();
    p3->getResumen();
    cout<<"\n------------------------------------ FIN RESUMEN -------------------------------------\n\n";

    //TODO La parte de pedir dni y buscar
}

int main(void){
    Calificando();
    return 0;
}
