#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> estoque;
    list<int> venda;
    list<int>::iterator p;

    int N = 0, op = 0, codigo = 0;


    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> op;

        if(op == 1){
            cin >> codigo;
            estoque.push_back(codigo);
        }
        else{
            if (!estoque.empty()) {
                int topo = estoque.front();
                estoque.pop_front();        
                venda.push_front(topo);
            }
        }
    }

    cout << "Estoque: ";
    for (p = estoque.begin(); p != estoque.end(); p++) {
        cout << *p << " ";
    }
    cout << endl;

    cout << "Venda: ";  

    for (p = venda.begin(); p != venda.end(); p++) {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}