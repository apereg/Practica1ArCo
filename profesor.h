#ifndef PROFESOR_H
#define PROFESOR_H

#include <persona.h>
#include <alumno.h>

class Profesor : public Persona{
    private:
        Alumno alumnos[5];
    public:
        Profesor(string nombrein, string apellidosin, string dniin);
        void addAlumno(int pos, Alumno alumno);
        Alumno getAlumno(int pos);
        string getResume();
};

#endif
