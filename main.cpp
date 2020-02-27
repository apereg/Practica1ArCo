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
	Alumno(String nombrein, String dniin, int nota1):Persona(nombrein, dniin){
		
	}
	Alumno(String nombrein, String dniin, int nota1,int nota2):Persona(nombrein, dniin){
		
	}
	Alumno(String nombrein, String dniin, int nota1, int nota2, int nota3):Persona(nombrein, dniin){
		
	}

	void setNota(int nota){

	}
};

int main(int argc, char *argv[]){
	
    return a.exec();
}
