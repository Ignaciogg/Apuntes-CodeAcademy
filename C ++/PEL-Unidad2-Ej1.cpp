/* Ignacio Gil Garzón
 Ej 1 Unidad 2: Punteros-Referencia
 Descripción: Realizar un programa que muestre la diferencia entre utilizar una función a la cual
 se le pasa una variable (valor) y otra a la que se le pasa un puntero (referencia)*/

#include<iostream>
using namespace std;

void sum10(int &num){
    int x;                      
    x = num+10;
    num = x;  
}

void sumPuntero(int &num){
    int x;                      
    x = num+10;
    num = x;
}

int main(int argc, char *argv[]){

    int num1=0;

    cout << "Introduce un numero: " << "\n";
    cin >> num1;

    cout << "Valor inicial de las variables introducidas por teclado: \n    num: " << num1 << "\n\n";
    sum10(num1);
    cout << "Valor tras pasar por la funcion normal:                  \n    num: " << num1 << "\n\n";
    sumPuntero(num1);
    cout << "Valor tras parar por la funcion con puntero:             \n    num: " << num1 << "\n\n";

}