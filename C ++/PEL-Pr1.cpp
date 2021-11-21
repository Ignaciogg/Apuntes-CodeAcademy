//Ignacio Gil Garzón 22041267

#include <iostream>
#include <cstdlib>

using namespace std;

class Hora {
    //private:
        //Me daba problemas al ser datos privados, los he puesto como públicos

    public:
         int horax;
         int min;
         int seg;
        
        //Métodos
        void visualizar();

        void sumar();
        
};


void Hora::visualizar(){
    //Implementación
    //Constructor 2 que inicializa a valores fijos:
    Hora miHora;
    miHora.horax = 12;
    miHora.min = 45;
    miHora.seg = 30;

    cout << miHora.horax << ":"<< miHora.min << ":"<< miHora.seg << "." << "\n";

}

void Hora::sumar(){
    //Implementación
    //Dos objetos inicializados y otro que no:
    Hora h1;
    h1.horax = 9;
    Hora h2;
    h2.horax = 3;
    Hora h3;


    h3.horax = h1.horax + h2.horax;
    cout << "Resultado: " << h3.horax << "\n";

}

int main(int argc, char *argv[]){

    //Principal
    //Constructor 1 que inicializa a 0:
    Hora miHora;
    miHora.horax = 0;
    miHora.min = 0;
    miHora.seg = 0;

    //Llamada a la función1:
    miHora.visualizar();

    //Llamada a la función2:
    miHora.sumar();

    return 0;
}
