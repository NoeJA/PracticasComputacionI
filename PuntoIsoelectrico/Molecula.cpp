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
    
        vector<int> c1;
        for (int i = 1; i < 3; i++){
            if (pka[i]>pka[i-1]){
                c1.push_back(i);
                
            }
            eq=(pka[c1[0]]+pka[c1[1]])/2;
        }
    
  return eq;
	    
	}
