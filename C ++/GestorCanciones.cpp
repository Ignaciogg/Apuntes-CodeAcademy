#include <iostream>
#include <string>
using namespace std;

class Cancion{
    private:
        string nombre;
        string artistas;
    
    public:
        void set(string n, string a){
        	nombre=n;
            artistas=a;
        }

    Cancion(){}
        string getNombre(){
            return nombre;
        }
        string getArtistas(){
            return artistas;
        }

};

class Artista{
    public:
        string nombre;
    void set(string n){
        	nombre=n;
        }
};

static int menu(){

    int a = 0;

        cout << "1 - Insertar una cancion" << "\n";
        cout << "2 - Buscar una cancion" << "\n";
        cout << "3 - Borrar una cancion" << "\n";
        cout << "0 - TERMINA" << "\n";
             
        cin >> a;
        return a;
}

int main(){

    int n = 0, a = 1, lin = 0, lin2 = 0;
    Cancion *listaCanciones = new Cancion[4];

    string nom, art;
    listaCanciones[0].set("Mi carro", "Manolo Escobar");
    listaCanciones[1].set("Mi carro2", "Mario Escobar");
    listaCanciones[2].set("Mi carro3", "Paco Escobar");
    listaCanciones[3].set("Mi carro4", "Luis Escobar");

    cout << "Vector inicial:" << "\n";
    for(int i = 0; i<4; i++){
        cout << listaCanciones[i].getNombre() << " - " << listaCanciones[i].getArtistas() << "\n";
    }
    cout << "\n";

    while(a!=0){
        a = menu();
        switch(a){

            case 1: 
                
                cout << "\n" << "Inserte nombre:" << "\n";
                cin >> nom;
                cout << "Inserte artista/s:" << "\n";
                cin >> art;
                //listaCanciones.push_back(nom, art);
                //listaCanciones[4].set(nom, art);

                cout << "Vector actual:" << "\n";
                for(int i = 0; i<4+n+1; i++){
                    cout << listaCanciones[i].getNombre() << " - " << listaCanciones[i].getArtistas() << "\n";
                }
                n++;
                

            break;
            case 2:
                cout << "Inserte el num de cancion que quiere buscar: " << "\n";
                cout << ("(vector empieza en 0)")  << "\n";
                cin >> lin;

                for(int i = 0; i<4; i++){
                    if(i == lin){
                        cout << listaCanciones[i].getNombre() << " - " << listaCanciones[i].getArtistas() << "\n";
                    }     
                }

            break;
            case 3:
                cout << "Inserte el num de cancion que quiere borrar: " << "\n";
                cin >> lin2;

                for(int i = 0; i<4; i++){
                    if(i == lin2){
                        listaCanciones[i].set("", "");
                    }     
                }
            break;
            default:
                cout << "Adios" << "\n";
        }
    }


    return 0;
}