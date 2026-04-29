#include <iostream>
#include<string>
using namespace std;

int main(){
    char vetor[5];
    string str = "cinco";

    for(int i = 0; i< 5; i++){
        cin >> vetor[i];
    }
    for(int i = 0; i< 5; i++){
        cout << vetor[i];
    }

    cout << "" << endl;
    cout << str << endl;
    return 0;
}