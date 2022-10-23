#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    // mendeklarasikan constanta
    const float PI = 3.14;

    // mendeklarasikan var
    float luas;
    int a,b,c,r;

    // mengisi nilai var
    a = 3;
    b = 4;
    c = 6;
    r = 7;

    // menampilkan nilai ke konsol
    cout<<"a = "<<a <<"b = "<<b <<"c = "<<c <<endl;

    // operasi aritmatik
    cout <<"a + b = "<< a + b <<endl;
    cout <<"b - a = "<< b - a <<endl;
    cout <<"a * b = "<< a * b <<endl;
    cout <<"c / a = "<< c / a <<endl;
    cout <<"b / a = "<< b / a <<endl;
    cout <<"c mod b = " << c % a <<endl;

    cout<<"PI = "<<PI <<endl;
    cout<<"r = "<<r <<endl;

    // menghitung luas lingkaran
    luas = PI * r * r;
    cout <<"luas lingkaran = \n";
    cout <<"PI * r * r = "<<luas;
    
    return 0;
}
