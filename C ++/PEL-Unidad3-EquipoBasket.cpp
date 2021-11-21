#include <iostream>
#include <string>
#include <vector>
using namespace std;

class equipo {
	private:
    	string nombre;
        string entrenador;
    public:
    	void set(string n, string e){
        	nombre=n;
            entrenador=e;
        }
        equipo(){}
        string getnombre(){
            return nombre;
        }
        string getentrenador(){
            return entrenador;
        }
};

class partido {
	private:
    	string nom;
    public:
    	void set(string n){
        	nom=n;
        }
        partido(){}
        string getnom(){
            return nom;
        }
};

int main() {

    cout << "   --- Jubilados intentando evitar la astrosis ---" << "\n\n\n";
    equipo *listaequipos = new equipo[4];
    listaequipos[0].set("E1", "Joaquin");
    listaequipos[1].set("E2", "Mario");
    listaequipos[2].set("E3", "Nacho");
    listaequipos[3].set("E4", "Lucas");

    partido *listapartidos = new partido[4];

    /*
    for(int i = 0; i<4; i++){
        listapartidos[i].set(listaequipos[0].getnombre() + " VS " + listaequipos[i].getnombre());
    }
    */
    
    listapartidos[0].set(listaequipos[0].getnombre() + " " + listaequipos[0].getentrenador()  + " VS " + listaequipos[1].getnombre()+ "   " + listaequipos[1].getentrenador());
    listapartidos[1].set(listaequipos[2].getnombre() + "   " + listaequipos[2].getentrenador()  + " VS " + listaequipos[3].getnombre()+ "   " + listaequipos[3].getentrenador());
    listapartidos[2].set(listaequipos[1].getnombre() + "   " + listaequipos[1].getentrenador()  + " VS " + listaequipos[0].getnombre()+ " " + listaequipos[0].getentrenador());
    listapartidos[3].set(listaequipos[3].getnombre() + "   " + listaequipos[3].getentrenador()  + " VS " + listaequipos[2].getnombre()+ "   " + listaequipos[2].getentrenador());
    

    cout << "PARTIDOS DE IDA:" << "\n\n";
    for(int j = 0; j<2; j++){
        cout << listapartidos[j].getnom() << "\n";
    }

    cout << "\nPARTIDOS DE VUELTA:" << "\n\n";
    for(int k = 2; k<4; k++){
        cout << listapartidos[k].getnom() << "\n";
    }


    int DESDE=5, HASTA=70;
    int aleatorio1 = 0, aleatorio2 = 0;

    for(int i = 0; i<listapartidos.size();i++){
        aleatorio1 = rand()%(HASTA-DESDE+1)+DESDE;
        aleatorio2 = rand()%(HASTA-DESDE+1)+DESDE;

        string *anadir = "  " + aleatorio1 +"-"+aleatorio2;

        listapartidos[i].push_back(anadir);
    }
    

    cout << "\nRESULTADOS:" << "\n\n";
    for(int p = 0; p<4; p++){
        cout << listapartidos[p].getnom() << "\n";
    }

    return 0;
}