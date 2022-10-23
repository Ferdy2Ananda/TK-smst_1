#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    const float PI = 3.14;
    float luas;
    int a,b,c,r;

    cout <<"masukan nilai a: "; cin>>a;
    cout <<"masukan nilai b: "; cin>>b;
    cout <<"masukan nilai c: "; cin>>c;

    r = 7;
    cout <<"nilai r = " << r <<endl;

    cout <<"hasil dari a + b = " << a + b <<endl;
    cout <<"hasil dari b - c = " << b - c <<endl;
    cout <<"hasil dari c / a =" << c / a <<endl;
    cout <<"hasil dari a * c = " << a * c <<endl;
    cout <<"hasil dari PI * r * r =" << PI * r * r <<endl;
}