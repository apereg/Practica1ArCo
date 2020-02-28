#ifndef ALUMNO_H
#define ALUMNO_H

#include <persona.h>

class Alumno : public Persona{
    private:
        float notas[3];
        int nNotas;
        float notaMedia;

    public:
        Alumno();
        Alumno(string nombrein, string apellidosin, string dniin);
        void setNota1(float nota1);
        void setNota2(float nota1, float nota2);
        void setNota3(float nota1, float nota2, float nota3);
        int getNNotas();
        float getNota1();
        float getNota2();
        float getNota3();
        float getNotaMedia();
        void getResumen();
        void getNotasInfo();
        float calcularMedia();
};

#endif
