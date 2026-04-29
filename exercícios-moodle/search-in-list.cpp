#include <iostream>
#include <list>

using namespace std;

int main(){

    list <int> lista;
    int input;

    for(int i = 0; i < 10; i++){
        cin >> input;
        lista.push_front(input);
    }

    for(int i = 0; i < 10; i++){
        for(int i = 0; i < 4; i++){
        cout << *lista.end() << " ";
        lista.pop_back();
    }
    }    

    return 0;
}