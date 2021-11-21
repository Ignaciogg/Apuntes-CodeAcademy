#include <iostream>
#include <string>
#include <list>
using namespace std;

class Caja{
    public:
    int numCaja;
    int numClientes;
    Caja(){}
};

class Cliente{
    public:
    string nombre;

    Cliente(){}
};

//Imprimir lista
void imprimeList(list<string> &sList ){
    list<string>::iterator pos;
    pos = sList.begin();
    while (pos != sList.end()){
        cout << *pos << "\n";
        pos++;
    }
}

//Imprimir reverse lista
void reverseList(list<string> &sList ){
    list<string>::reverse_iterator pos;
    pos = sList.rbegin();
    while (pos != sList.rend()){
        cout << *pos << endl;
        pos++;
    }
}

int main(){

    list <string> listita;

    listita.push_back("pepinillos");
    listita.push_back("manzanas");
    listita.push_back("almendras");
    listita.push_back("spaghettis");
    listita.push_back("tomates");

    list<string>::iterator pos;
    pos = listita.begin();
    cout << *pos << "\n";

    imprimeList(listita);
    cout << "\n";
    reverseList(listita);
    

    return 0;
}