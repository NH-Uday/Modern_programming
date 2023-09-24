#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int &refa = a;

    int b = 10;
    int *refb = &b;
    cout << b << endl;
    cout << a << endl;
    cout << refa << endl;
    cout <<refb;

    


    return 0;
}