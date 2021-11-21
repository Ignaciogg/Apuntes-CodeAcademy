/* Ignacio Gil Garzón
 Ej 2 Unidad 1: Plantillas/Templates
 Descripción: Elaborar un programa que pida por teclado 3 entradas (Introduzca el primer valor/carácter..., el segundo...) y que, 
 independientemente del tipo, éste me devuelva por pantalla dicha entrada ordenada y lo guarde en una clase */

#include<iostream>
using namespace std;

template <class tipo>
int verMayor(int num1, float num2, float num3){
    if(num1 > num2){
        if(num1 > num3){
            return num1;
        }
        else
            return num3;
    }
    else
        if(num2 > num3){
            return num2;
        }
        else
            return num3;
    
}

int main(){

    int num1 = 1;
    float num2 = 2.0, num3 = 3.0;

    cout << "Introduzca el primer valor: " << "\n";
    cin >> num1;
    cout << "\n";
    cout << "Ahora, introduzca el segundo valor: " << "\n";
    cin >> num2;
    cout << "\n";
    cout << "Ahora, introduzca el tercer valor: " << "\n";
    cin >> num3;
    cout << "\n";

    cout << "Este es el mayor numero entre los que has introducido: " << verMayor <int>(num1, num2, num3) << endl;
    return 0;
}