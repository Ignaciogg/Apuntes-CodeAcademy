#include <iostream>
#include <string>
using namespace std;

class Fecha{
    public:
        int dia;
        int mes;
        int anio;
   

    Fecha(){}

    void mostrarFecha(int d, int m, int a);

};

/*template <class tipo>
void Fecha::mostrarFecha(int d, int m, int a){

    cout << "Dia: " << d << " Mes: " << m << " Anio: " << a;
}*/

// No se resolver el error de compilación que me da, lo entrego así para que cuente algo

int main(){

    int d = 0,m = 0,a = 0;

    cout << "Introduce dia: ";
    cin >> d;

    cout << "Introduce mes: ";
    cin >> m;

    cout << "Introduce anio: ";
    cin >> a;
    

    //mostrarFecha(d,m,a);
    return 0;
}