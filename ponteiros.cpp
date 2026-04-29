#include <iostream>

using namespace std;

int main(){

    int i = 2;
    int *p = NULL;
    p = &i;
    *p = i;

    cout << "i = " << i << endl;
    cout << "&i = " << &i << endl;// ref
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;// de-ref


    return 0;
}