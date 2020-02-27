#ifndef ALUMNO_H
#define ALUMNO_H

#include <persona.h>

class Alumno : public Persona{
    private:
        int nota1;
        int nota2;
        int nota3;
        int notaMedia;
    public:
        Alumno(string nombrein, string apellidosin, string dniin);
        void setNota1(int nota);
        void setNota2(int nota);
        void setNota3(int nota);
        int getNota1();
        int getNota2();
        int getNota3();
        int getNotaMedia();
};

#endif
