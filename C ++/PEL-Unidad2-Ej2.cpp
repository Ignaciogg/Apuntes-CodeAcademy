/* Ignacio Gil Garzón
 Ej 2 Unidad 2: Estructuras a funciones
 Descripción: Realizar que sea capaz de calcular el número de vocales de una cadena*/

#include<iostream>
using namespace std;

int cuentaVocales(char *c){

	int vocales = 0;

	for (int i = 0; c[i] != '\0'; i++){

        // Antes de buscar, pasa todos los carácteres a lower case
		char letraActual = tolower(c[i]);

		if (letraActual == 'a' || letraActual == 'e' || letraActual == 'i' || letraActual == 'o' || letraActual == 'u'){
			vocales++;
		}
	}
	return vocales;
}

int main(int argc, char const *argv[]){
	
    char texto[80] = "texto";

    cout << "Escribe una cadena de caracteres (max 80) y el programa buscara cuantas vocales tiene:" << "\n";
    cin.get(texto, 80);

    cout << "El texto tiene: " << cuentaVocales(texto) << " vocales";

}