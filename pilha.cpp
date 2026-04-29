#include <list>
#include <iostream>

using namespace std;

int main(){

    list<int> lista;
    list<int>::iterator p;//ponteiro pra oercorrer a lista

    lista.push_front(1);//adiciona o valor na lista, na primeira posição (push_back para a ultima)
    lista.push_front(2);
    lista.push_front(3);
    lista.push_front(4);

    p = lista.begin();//aponta o ponteiro (p) para o primeiro valor da lista

    cout << *p << endl; //mostra o endereço do primeiro valor da lista

    cout << *lista.begin() << endl;

    lista.pop_front();

    cout << *lista.begin() << endl;


    return 0;
}