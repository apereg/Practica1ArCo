#include <iostream>
#include <profesor.h>
#include "string"

#define TRUE 1

using namespace std;

void Calificando(){

    Profesor profesores[3];
    int numProfesores = 3;

    Profesor *p1 = new Profesor("Adrian", "Perez Garcia", "000000000A");
    profesores[0] = *p1;
    Profesor *p2 = new Profesor("Miguel Angel", "Conde Gonzalez", "00000000m");
    profesores[1] = *p2;
    Profesor *p3 = new Profesor("David", "Martinez Martinez", "00000000D");
    profesores[2] = *p3;

    Alumno alumnos[3];
    Alumno *a1 = new Alumno("Pablo", "Lopez Rodriguez", "000000000P");
    alumnos[0] = *a1;
    Alumno *a2 = new Alumno("Juan", "Rodriguez Lopez", "000000000J");
    alumnos[1] = *a2;
    Alumno *a3 = new Alumno("Ruben", "Sanchez Garcia", "000000000R");
    alumnos[2] = *a3;

    p1->addAlumno(*a1);
    p1->addAlumno(*a2);
    p2->addAlumno(*a3);

    p1->setNota2(a1, 9.1, 5.0);
    p1->setNota3(a2, 3.0, 3.5, 4.5);

    cout<<"------------------------------------ RESUMEN APP ------------------------------------\n\n";
    for(int i = 0; i < numProfesores; i++){
        profesores[i].getResumen();
        cout<<"\n";
    }
    cout<<"\n------------------------------------ FIN RESUMEN -------------------------------------\n\n";

    //TODO La parte de pedir dni y buscar
    while(TRUE){
        cout<<"Introduce un DNI para comenzar la busqueda: ";
        string dniin;
        cin>>dniin;
        cout<<dniin;
    }
}

int main(void){
    Calificando();
    return 0;
}
