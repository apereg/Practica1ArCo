#ifndef PROFESOR_H
#define PROFESOR_H

#include <persona.h>
#include <alumno.h>

class profesor : public persona{

public:
    profesor(string nombre, string dni);
    profesor(string nombre, string dni, Alumno* alumnos);

    void addAlumno();
    void getResumen();

private:
    string nombre;
    string dni;
    Alumno* alumnos;
};

#endif
