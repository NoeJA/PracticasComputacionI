#ifndef GRUPO_H
#define GRUPO_H
#include <string>
using namespace std;
class Grupo
{
	private:
		string Nombre;
		float Pka;
		int Carga;
		
	public:
		Grupo(){Nombre=""; Pka=0; Carga=0;};
		Grupo (string nombre, float pka, int carga);
		
		int GetCarga();
		float GetPka();
	
};
#endif 

