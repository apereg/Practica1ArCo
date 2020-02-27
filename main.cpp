#include <iostream>

using namespace std;

class Persona{
protected:
	String nombre;
	String dni;
	public:
		void getNombre(){

		}

		void getdni(){

		}
};

class Alumno : public Persona{
private:
	int nota1;
	int nota2;
	int nota3;
	int notaMedia;
public:
	Alumno(String nombrein, String dniin):Persona(nombrein, dniin){

	}
	Alumno(String nombrein, String dniin, int nota1in):Persona(nombrein, dniin){
		
	}
	Alumno(String nombrein, String dniin, int nota1in,int nota2in):Persona(nombrein, dniin){
		
	}
	Alumno(String nombrein, String dniin, int nota1in, int nota2in, int nota3in):Persona(nombrein, dniin){
		
	}

	void setNota(int nota){

	}
};

class Profesor : public Persona{
private:
	Alumno[] alumnos;
public:
	Profesor(String nombrein, String dniin):Persona(nombrein, dniin){

	}
};

int main(int argc, char *argv[]){
	
    return a.exec();
}
