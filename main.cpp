#include <iostream>
#include <profesor.h>
#include "string"

#define TRUE 1

using namespace std;

void Calificando(){

    /* Se crean los 3 objetos Profesor */
    Profesor *p1 = new Profesor("Adrian", "Perez Garcia", "000000000A");
    Profesor *p2 = new Profesor("Miguel Angel", "Conde Gonzalez", "00000000m");
    Profesor *p3 = new Profesor("David", "Martinez Martinez", "00000000D");

    /* Se añaden los alumnos */
    Alumno alumnos[3];
    Alumno *a1 = new Alumno("Pablo", "Lopez Rodriguez", "000000000P");
    alumnos[0] = *a1;
    Alumno *a2 = new Alumno("Juan", "Rodriguez Lopez", "000000000J");
    alumnos[1] = *a2;
    Alumno *a3 = new Alumno("Ruben", "Sanchez Garcia", "000000000R");
    alumnos[2] = *a3;

    /* Se asigna cada alumno a un profesor */
    p1->addAlumno(*a1);
    p1->addAlumno(*a2);
    p2->addAlumno(*a3);

    /* Se califica (desde el profesor) a los alumnos */
    p1->setNota2(a1, 9.1, 5.0);
    p1->setNota3(a2, 3.0, 3.5, 4.5);

    /* Se crea un array de profesores y se guardan en el todos los profesores */
    Profesor profesores[3];
    int numProfesores = 3;
    profesores[0] = *p1;
    profesores[1] = *p2;
    profesores[2] = *p3;

    /* Se imprime el resumen de la app (llamar al metodo resumen de cada profesor del array) */
    cout<<"------------------------------------ RESUMEN APP ------------------------------------\n\n";
    for(int i = 0; i < numProfesores; i++){
        profesores[i].getResumen();
        cout<<"\n";
    }
    cout<<"\n------------------------------------ FIN RESUMEN -------------------------------------\n\n";

    /* En un bucle infinito se pide al usuario la entrada de un DNI para buscar */
    while(TRUE){
        cout<<"Introduce un DNI para comenzar la busqueda: ";
        string dniin;
        cin>>dniin;
        cout<<dniin<<endl;
        int aux = -1;
        for (int i = 0; i <numProfesores;i++) {
            if(profesores[i].getDni() == dniin){
                profesores[i].getResumen();
                break;
            } else{
                aux = profesores[i].searchAlumno(dniin);
                if(aux != -1){
                    cout<<endl;
                    profesores[i].getAlumno(aux).getResumen();
                    break;
                }
            }

            if(i == numProfesores-1)
                cout<<"No existe ningun profesor ni alumno con DNI "<<dniin<<"\n";

        }
        cout<<endl;

    }
}

int main(void){
    Calificando();
    return 0;
}
