#include <iostream>

using namespace std;

void ordenar(int vet[]){

    int ref;
    for(int j = 1; j < 7; j++){//j começca em 1, por ser a primeira casa vermelha(desordenada) do vetor
        ref = vet[j];

        int i = j-1;
        while((ref > vet[i]) && i >= 0){
            vet[i + 1] = vet[i];
            i--;
        }

        vet[i+1] = ref;
    }

    for(int i = 0; i < 7; i++){
        cout << vet[i];
    }
}

int main(){

    int vet[7];

    for(int i = 0; i < 7; i++){
        cin >> vet[i];
    }

    ordenar(vet);
    return 0;
}