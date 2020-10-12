//Noé Jaimes Avila
/*
 */

#include <iostream>
using namespace std;

float suma(float n1, float n2)
{
    return (n1+n2);
}

float resta(float n1, float n2)
{
    return (n1-n2);
}

float mult(float n1, float n2)
{
    return (n1*n2);
}

float division(float n1, float n2)
{
    return (n1/n2);
}
int modulo(float n1, float n2)
{
    return (int(n1) % int(n2));
}

int main () {
    int respuesta;
    float n1, n2, operacion;

    cout << "¿Quiere continuar? 1 Para si, cualquier otra tecla para salir";
    cin >> respuesta;

    while (respuesta == 1){
        cout << "Introduzca un número" << endl;
        cin >> n1;

        cout << "Introduzca un segundo numero" << endl;
        cin >> n2;

        cout << "Introduzca una operacion";
        cout << "(1) para suma, (2) para resta (3) para multiplicación, (4) para división y (5) para módulo " << endl;
        cin >> operacion;

        if (operacion == 1) {
            cout << "La respuesta es: " << suma(n1, n2) << "\n";}


        else if (operacion==2){
            cout << "La respuesta es: " << resta(n1, n2) << "\n";
        }


        else if (operacion==3){
            cout << "La respuesta es: " << mult(n1, n2) << "\n";
        }


        else if (operacion==4) {
            if(n2==0) {
            break;
            }
            cout << "La respuesta es: " << division(n1, n2) << "\n";;
        }


        else if (operacion==5) {
            cout << "La respuesta es: " << modulo(n1, n2) << "\n";;
        }

        cout << "¿Quiere continuar? 1 Para si, cualquier otra tecla para salir";
        cin >> respuesta;

}



    return 0;
}
