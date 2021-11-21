// Ejercicios 8-16 de los Temas 1-3 de PEL
// Ignacio Gil Garzón

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    /*
    //8

    vector<int> vectorNums;
    int size = 0, input = 0;
    cout << "Introduce cuantos numeros abarcara tu vector: ";
    cin >> size;
    // Añade
    for(int i = 0; i<size; i++){
        cout << "Introduce el numero " << i << " del vector: ";
        cin >> input;
        vectorNums.push_back(input);
    }
    // Imprime
    for(int i = 0; i<size; i++)
        cout << "Vector[" << i << "]: " << vectorNums[i] << "\n";

    //9

    vector<int> vectorNums;
    int size = 0, input = 0;
    cout << "Introduce cuantos numeros abarcara tu vector: ";
    cin >> size;
    // Añade
    for(int i = 0; i<size; i++){
        cout << "Introduce el numero " << i << " del vector: ";
        cin >> input;
        vectorNums.push_back(input);
    }
    // Imprime
    for(int i = size-1; i>=0; i--)
        cout << "Vector en orden inverso [" << i << "]: " << vectorNums[i] << "\n";
    
    //10

    vector<int> vectorNums;
    int size = 0, input = 0;
    cout << "Introduce cuantos numeros abarcara tu vector: ";
    cin >> size;
    // Añade
    for(int i = 0; i<size; i++){
        cout << "Introduce el numero " << i << " del vector: ";
        cin >> input;
        vectorNums.push_back(input);
    }

    int mayor = vectorNums[0];
    for(int i = 0; i<size; i++){
        if(mayor < vectorNums[i])
            mayor = vectorNums[i];
    }

    cout << "El mayor elemento del vector es: " << mayor;

    //11

    vector <int> v1;
    v1 = {1, 2, 3, 4, 5, 18, 3};
    int suma = 0;

    int mayor = v1[0];
    for(int i = 0; i<v1.size(); i++){
        if(mayor < v1[i])
            mayor = v1[i];
        
        suma = suma + v1[i];
    }
 
    cout << "El mayor elemento del vector es: " << mayor;
    
    if(mayor == suma-mayor){
        cout << "\n\n" << mayor << " equivale a la suma del resto de numeros del vector.";
    }

    //12

    vector <char> v1;
    v1 = {'a', 'b', 'c'};
    vector <char> v2;
    v2 = {'d', 'e', 'f', 'g'};
    vector <char> v3;
    v3 = {'0', '0', '0', '0', '0', '0', '0'};

    for(int i = 0; i<v1.size(); i++)
        v3[i] = v1[i];

    for(int x = 0; x<v2.size(); x++){
        v3[3+x] = v2[x];
    }
    //Imprimir v3
    for(int c = 0; c<v3.size(); c++){
         cout << v3[c] << "\n";
    }

    //13

    int array1[4], array2[4];
    for(int i = 0; i<=4; i++){
        cout << "Array1[" << i << "]= ";
        cin >> array1[i];
    }
    cout << "\n";
    for(int i = 0; i<=4; i++){
        array2[i] = array1[i] * 2;
        cout << "Array2[" << i << "]= " << array2[i] << "\n";
    }
  
    //14

    char texto[100] = "aaa";

    cout << "Escribe una cadena de caracteres:" << "\n";
    cin.get(texto, 100);

    if(texto[9]!= '\0'){
        for(int i = 0; i<100; i++){
            cout << texto[i];
        }
    }

    //15

    char array1[100], array2[100];
    string text;

    cout << "Escribe una cadena de caracteres:" << "\n";
    cin >> text;

    for(int i = 0; i<text.length(); i++){
        array1[i] = text[i];
        array2[i] = array1[i];
        cout << "Array2[" << i << "]: " << array2[i] << "\n";
    }

    //16

    string text, text2;
    bool distintas = false;

    cout << "Escribe una cadena de caracteres:" << "\n";
    cin >> text;
    cout << "\n" << "Introduce otra:" << "\n";
    cin >> text2;

    if(text == text2){
        cout << "Las cadenas de caracteres son iguales.";
    }else{
        cout << "Las cadenas de caracteres son diferentes." << "\n";
        distintas = true;
    }

    if(text < text2 && distintas == true)
        cout << "La primera cadena es menor que la segunda.";
    if(text > text2 && distintas == true)
        cout << "La primera cadena es menor que la segunda.";

    */
   
    
    return 0;
}