#ifndef MOLECULA_H
#define MOLECULA_H
#include <string>
#include <vector>
using namespace std;
class Molecula
{
	private:
	string Nombre;
	vector<string> grupos;
	vector<float> pka;
	vector<int> carga;
		
		
	public:
	Molecula(string nombre){Nombre=nombre;};
	void AgregarGrupo(Grupo crearGrupo);
	float CalcularPuntoIsoelectrico();
		
	
};
#endif 
