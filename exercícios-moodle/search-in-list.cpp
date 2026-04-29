#include <iostream>
#include <list>

using namespace std;

bool encontrar(list<int> lista, int x){
    list<int>::iterator p;
    p = lista.begin();

    while(p != lista.end()){
        if(*p == x) return true;
        p++;
    }
    return false;
}


int main(){

    list <int> lista;
    int input, x;

    cin >> input;

    while(input != 0){
        cin >> input;
        lista.push_front(input);
    }

    cin >> x;

    if(encontrar(lista, x) == true){
        cout << "Encontrado" << endl;
    }
    else{
        cout << "Nao encontrado" << endl;
    }

    return 0;
}