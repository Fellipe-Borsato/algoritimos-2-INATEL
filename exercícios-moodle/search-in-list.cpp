#include <iostream>
#include <list>

using namespace std;

bool encontrar(list<int> lista, int x){
    list<int>::iterator p;
    p = lista.begin();

    for(int i = 0; i < 10; i++){
        if(*p == x) return true;
        p++;
    }

    return false;
}


int main(){

    list <int> lista;
    int input, x;

    for(int i = 0; input != 0; i++){
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