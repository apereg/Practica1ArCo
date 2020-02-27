#include <iostream>
#include <profesor.h>
#include "string"

using namespace std;

void Calificando(){
    Persona *p1 = new Profesor("Adrian", "Perez Garcia", "71479570D");
    p1->getResume();
}

int main(void){
    Calificando();
}
