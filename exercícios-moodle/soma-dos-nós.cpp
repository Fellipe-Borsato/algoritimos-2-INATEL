#include <iostream>
#include <list>

using namespace std;

int soma(list<int> lista) {

    int ref = 0;
    list<int>::iterator p;
    p = lista.begin();

    while (p != lista.end()) {
        ref += *p;
        p++;
    }

    return ref;
}

int main() {
    list<int> lista;
    int input = 0, result = 0;

    do{
        cin >> input;
        if (input != 0) lista.push_front(input); // pra não incluir o 0
        
    }while (input != 0);
    
    result = soma(lista);

    cout << result << endl;

    return 0;
}