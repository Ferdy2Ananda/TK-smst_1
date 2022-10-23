#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    const float PI = 3.14;
    float luas;
    int a,b,c,d,r;

    cout <<"masukan nilai a: "; cin>>a;
    cout <<"masukan nilai b: "; cin>>b;
    cout <<"masukan nilai c: "; cin>>c;
    cout <<"masukan nilai d: "; cin>>d;

    r = 7;
    a = a + b; 
    b = b - a;
    c = a * c;
    d = c / a;
    luas = PI * r * r ;
    

    cout <<"a + b = " <<a <<endl;
    cout <<"b - a = " <<b <<endl;
    cout <<"a * c = " <<c <<endl;
    cout <<"c / a = " <<d <<endl;
    cout <<"nilai r = " <<r <<endl;
    cout <<"luas PI = " <<luas <<endl;
}