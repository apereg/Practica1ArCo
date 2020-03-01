#ifndef PROFESOR_H
#define PROFESOR_H

#include <persona.h>
#include <alumno.h>
#include <stdlib.h>

class Profesor : public Persona{

    protected:
        int nAlumnos = 0;
        int alumnosLength = 50;
        Alumno alumnos[50];

    public:
        Profesor();
        Profesor(string nombrein, string apellidosin, string dniin);
        Alumno getAlumno(int pos);
        int getMejorNotaMedia();
        void addAlumno(Alumno alumno);
        void setNota1(Alumno *alumno,float nota1);
        void setNota2(Alumno *alumno,float nota1, float nota2);
        void setNota3(Alumno *alumno,float nota1, float nota2, float nota3);
        int containsAlumno(Alumno *alumno);
        int searchAlumno(string dniin);
        void getResumen();

};

#endif
