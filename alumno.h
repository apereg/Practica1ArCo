#ifndef ALUMNO_H
#define ALUMNO_H

#include <persona.h>

class alumno : public persona{

public:
    alumno(string nombre, string dni);
    alumno(string nombre, string dni, int nota);
    alumno(string nombre, string dni, int nota1, int nota2);
    alumno(string nombre, string dni, int nota1, int nota2, int nota3);

    void addNota();
    void getResumen();

private:
    string nombre;
    string dni;
    int nota1;
    int nota2;
    int nota3;
};

#endif
