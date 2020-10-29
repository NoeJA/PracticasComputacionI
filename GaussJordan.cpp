
#include <iostream>
#include <array>

// A�adir std para f�cil llamado de funciones
using namespace std;

//// Declaraci�n de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz& miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz& miMatriz);

template <typename matriz>
void GaussJordan(matriz& miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz& miMatriz);


int main()
{
    // Definimos el n�mero de variables de nuestro sistema
    const int variables = 3;
    // El n�mero de columnas ser� el n�mero de variables m�s su solici�n para cada ecuaci�n
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el m�todo de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la soluci�n de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con �xito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ning�n valor.
*/
template <typename matriz>
void LlenarMatriz(matriz& miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ning�n valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz& miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Imprime en pantalla la soluci�n para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ning�n valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz& miMatriz){
    int n = miMatriz.size();
    for(int i=0;i<n;i++)
        {
            cout<<"\nx"<<i+1<<" = "<<miMatriz[i][n]<<endl;
        }
}


/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la soluci�n del algoritmo.
No regresa ning�n valor.
*/
template <typename matriz>
void GaussJordan(matriz& miMatriz) {
    int n=miMatriz.size();
    float temp;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                temp=miMatriz[j][i]/miMatriz[i][i];
                for(int k=i;k<n+1;k++)
                {
                      miMatriz[j][k]-=temp*miMatriz[i][k];
                }
            }
        }
    

    
        for(int i=n-1;i>=0;i--)
        {

            for(int j=i-1;j>=0;j--)
            {
                temp=miMatriz[j][i]/miMatriz[i][i];
                for(int k=n;k>=i;k--)
                {
                    miMatriz[j][k]-=temp*miMatriz[i][k];
                }
            }
    
        float x[n];
        for(int i=0;i<n;i++)
            x[i]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(x[i]==0&&j!=n)
                    x[i]=miMatriz[i][j];
                if(x[i]!=0)
                    miMatriz[i][j]/=x[i];
            }
        }
    
}
}
