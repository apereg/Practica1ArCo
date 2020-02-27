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
        void getNota1();
        void getNota2();
        void getNota3();
        void getNotaMedia();
};

#endif
