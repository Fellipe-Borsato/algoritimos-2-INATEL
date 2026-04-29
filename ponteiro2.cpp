#include <iostream>

using namespace std;

int main(){

    int vet[5];
    int *p = NULL;

    vet[0] = 1;
    vet[1] = 2;
    vet[2] = 3;
    vet[3] = 4;
    vet[4] = 5;

    p = vet;
    cout << "endereco inicial: " << p << endl;

    for(int i = 0; i < 5; i++){
        p = &vet[i];
        cout <<"endereco da pos " << i << " = " << p << endl;
    }
    return 0;
}