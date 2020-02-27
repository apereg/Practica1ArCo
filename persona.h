#ifndef PERSONA_H
#define PERSONA_H

#include "string"
using namespace std;

class Persona{
    public:
        Persona();
        Persona(string nombrein, string apellidosin, string dniin);
        string getNombre();
        string getDni();
        string getApellidos();
        void setNombre(string nombrein);
        void setDni(string dniin);
        void setApellidos(string apellidosin);
    protected:
        string nombre;
        string apellidos;
        string dni;
};

#endif
