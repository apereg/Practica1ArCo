#ifndef PERSONA_H
#define PERSONA_H

#include "string"
using namespace std;

class Persona{
    public:
        Persona(string nombrein, string apellidosin, string dniin);
        void getNombre();
        void getDni();
        void getApellidos();
    private:
        string nombre;
        string apellidos;
        string dni;
};

#endif
