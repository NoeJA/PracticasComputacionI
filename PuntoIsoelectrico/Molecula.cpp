#include <string>
#include <vector>
#include "Grupo.h"
#include "Molecula.h"

using namespace std;

void Molecula::AgregarGrupo(Grupo crearGrupo){
    grupos.push_back(crearGrupo.GetNom());
    pka.push_back(crearGrupo.GetPka());
    carga.push_back(crearGrupo.GetCarga());
    
}

float Molecula::CalcularPuntoIsoelectrico(){
    float eq=0;
    for (int i = 0, num =3; i < num; i++)
  {
    
        vector<int> c1;
        for (int i = 0; i < 3; i++){
            if (carga[i]==0){
                c1.push_back(i);
                
            }
            eq=(pka[c1[0]]+pka[c1[1]])/2;
        }
    
  }
  return eq;
	    
	}
