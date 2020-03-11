#ifndef ALUMNO_H
#define ALUMNO_H

#include <persona.h>

class Alumno : public Persona{

    private:
        float notas[3];
        int numNotas;
        float notaMedia;
        float calcularMedia();
        void getNotasInfo();

    public:
        Alumno(string nombrein, string apellidosin, string dniin);
        Alumno();
        float getNota1();
        float getNota2();
        float getNota3();
        int getNNotas();
        float getNotaMedia();
        void setNota(float nota1);
        void setNota(float nota1, float nota2);
        void setNota(float nota1, float nota2, float nota3);
        void getResumen();

};

#endif
