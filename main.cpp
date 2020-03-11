#include <iostream>
#include <profesor.h>
#include "string"

#define TRUE 1

using namespace std;

void Calificando(){

    /* Se crean los 3 objetos Profesor */
    Profesor profesores[4];
    int numProfesores = 4;
    Profesor *p1 = new Profesor("Adrian", "Perez Garcia", "00000000A");
    Profesor *p2 = new Profesor("Miguel Angel", "Conde Gonzalez", "00000000M");
    Profesor *p3 = new Profesor("David", "Martinez Martinez", "00000000D");
    Profesor *p4 = new Profesor("Lidia", "Sanchez Gonzalez", "00000000L");

    /* Se añaden los alumnos */
    Alumno *a1 = new Alumno("Pablo", "Lopez Rodriguez", "00000000P");
    Alumno *a2 = new Alumno("Juan", "Rodriguez Lopez", "00000000J");
    Alumno *a3 = new Alumno("Eva", "Mazcunyan Navarro", "00000000E");
    Alumno *a4 = new Alumno("Ruben", "Sanchez Garcia", "00000000R");
    Alumno *a5 = new Alumno("Zacarias", "Lopez Dos Santos", "00000000Z");
    Alumno *a6 = new Alumno("Carlota", "Arias Rodes", "00000000C");
    Alumno *a7 = new Alumno("Diana", "Gonzalez Fernandez", "00000000D");
    Alumno *a8 = new Alumno("Victor", "Gonzalez Alegre", "00000000V");

    /* Se asigna cada alumno a un profesor */
    p1->addAlumno(*a1);
    p1->addAlumno(*a2);
    p1->addAlumno(*a3);

    p2->addAlumno(*a4);
    p2->addAlumno(*a5);
    p2->addAlumno(*a6);

    p3->addAlumno(*a7);
    p3->addAlumno(*a8);

    /* Se califica (desde el profesor) a los alumnos */
    p1->setNota(a1, 9.1, 5.0);
    p1->setNota(a2, 3.0, 3.5, 4.5);
    p1->setNota(a3, 10.0, 10.0, 9.85);

    p2->setNota(a4, 10.0, 9.9);
    p2->setNota(a5, 1.0, 0.1, 0.6);

    p3->setNota(a7, 0.1);
    p3->setNota(a8, 10.0, 10.0);

    /* Se crea un array de profesores y se guardan en el todos los profesores */
    profesores[0] = *p1;
    profesores[1] = *p2;
    profesores[2] = *p3;
    profesores[3] = *p4;

    /* Se imprime el resumen de la app (llamar al metodo resumen de cada profesor del array) */
    cout<<"------------------------------------ RESUMEN APP ------------------------------------\n\n";
    for(int i = 0; i < numProfesores; i++){
        profesores[i].getResumen();
        cout<<"\n";
    }
    cout<<"\n------------------------------------ FIN RESUMEN -------------------------------------\n\n";

    /* En un bucle infinito se pide al usuario la entrada de un DNI para buscar */
    int exit = 0;
    do{

        cout<<"* Introduzca el valor 0 para salir del programa *"<<endl;
        cout<<"Introduce un DNI para comenzar la busqueda: ";
        string dniin;
        cin>>dniin;
        cout<<endl;

        /* Se busca secuencialmente en cada profesor y en sus alumnos una coincidencia en el campo dni */
        if(dniin == "0"){
            cout<<"Saliendo del programa..."<<endl<<endl;
            exit = 1;
        } else{
            for (int i = 0; i <numProfesores;i++) {
                if(profesores[i].getDni() == dniin){
                    /* Si se encuentra se llama al mismo metodo que al resumen */
                    profesores[i].getResumen();
                    break;
                } else{
                    int aux = -1;
                    aux = profesores[i].searchAlumno(dniin);
                    if(aux != -1){
                        profesores[i].getAlumno(aux).getResumen();
                        break;
                    }
                }

                /* Si es la ultima iteracion y no se ha encontrado ningun caso se muestra un mensaje de error */
                if(i == numProfesores-1)
                    cout<<"No existe ningun profesor ni alumno con DNI "<<dniin<<"\n";

            }
            cout<<endl;
        }
    }while(exit != 1);
    delete(a1);
    delete(a2);
    delete(a3);
    delete(a4);
    delete(a5);
    delete(a6);
    delete(a7);
    delete(a8);
    delete(p1);
    delete(p2);
    delete(p3);
    delete(p4);
}

int main(void){
    Calificando();
    return 0;
}
