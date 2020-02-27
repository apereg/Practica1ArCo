#ifndef ALUMNO_H
#define ALUMNO_H

#include <persona.h>

class Alumno : public Persona{
    private:
        int nota1;
        int nota2;
        int nota3;
        float notaMedia;

    public:
        Alumno();
        Alumno(string nombrein, string apellidosin, string dniin);
        void setNota1(int nota1);
        void setNota2(int nota1, int nota2);
        void setNota3(int nota1, int nota2, int nota3);
        int getNota1();
        int getNota2();
        int getNota3();
        float getNotaMedia();
};

#endif
