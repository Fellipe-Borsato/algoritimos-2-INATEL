#include <iostream> 
#include <cmath>

using namespace std;

int fatorial(int n){
    if(n == 0){
        return 1;
    } 

    else {
        return n * fatorial(n - 1);//isso é uma função recursiva, pq ela chama ela mesma
    }
}

int fib(int n){//fibonacci

    if (n == 1 || n == 0){
        return 1;
    }
    else{
        return (fib(n-1) + fib(n-2));
    }
}

int main(){
    int var;
    cin >> var;
    cout << fib(var) << endl;

    return 0;
}