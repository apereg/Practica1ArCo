#ifndef PROFESOR_H
#define PROFESOR_H

#include <persona.h>
#include <alumno.h>
#include <stdlib.h>

class Profesor : public Persona{
    private:
        int nAlumnos = 0;
        Alumno *alumnos;
    public:
        Profesor(string nombrein, string apellidosin, string dniin);
        void addAlumno(Alumno alumno);
        Alumno getAlumno(int pos);
        void getResume();
};

#endif
