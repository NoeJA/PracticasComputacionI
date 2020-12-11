#include "Almacen.h"
# include <iostream>
using namespace std;
//Idea: buscar en el espacio de memoria, si cantidad=0, agregar, true, si no, proceder.
bool Almacen::ModificarInventarioArticulo(Articulo* artPtr, int cantidad)
{
    
    ArticuloAlmacenado artic;
    artic.articulo=artPtr;
    artic.cantidad=cantidad;
    int var=0;
    int aux=0;
    int index=0;
    if(articulos.size()==0 && cantidad>0){
        articulos.push_back(artic);
        return true;
    }
    for (int i = 0, n = articulos.size(); i < n; i++)
    {
    
        if (articulos[i].articulo==artPtr){
            var=1;
            index=i;
        }
        else{
            aux+=1;
        
        }
    }
    
    if (var==1){
        if (articulos[index].cantidad>cantidad*(-1) || cantidad>0){
	        
	    articulos[index].articulo=(artPtr);
	    articulos[index].cantidad=articulos[index].cantidad+cantidad;
	    return true;
	    }
	    else{
	        return false;
	    }
    }
    
    if (aux==3 && cantidad>0 ){
    articulos[0].articulo=artPtr;
    articulos[0].cantidad=cantidad;
        return true;
    }
    
    else{
        return false;
    }
   
}

string Almacen::ObtenerInventario() const
{
	string invStr = "";
	invStr.append("\nArticulo\tCantidad\n");
	for (int i = 0, n = articulos.size(); i < n; i++)
	{
		invStr.append(articulos[i].articulo->nombre);
		invStr.append("\t");
		invStr.append(to_string(articulos[i].cantidad));
		invStr.append("\n");
	}
	return invStr;
}

string Almacen::ObtenerNombre() const {
    return nombre;
}

