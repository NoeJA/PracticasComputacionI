#include "Grupo.h"
#include <string>

Grupo::Grupo(string nombre,float pka, int carga ){
	Nombre=nombre;
	Pka=pka;
	Carga=carga;
}
int Grupo::GetCarga()
{
  return Carga;
}

float Grupo::GetPka(){
	return Pka;
}
