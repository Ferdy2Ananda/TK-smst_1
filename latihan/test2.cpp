#include <iostream>
using namespace std;

int main () {
    float a,b,c,i;

    cout<<"Input Bilagan Pertama :"; cin>> a;
    cout<<"Input Bilagan Kedua :"; cin>> b;
    cout<<"Input Bilagan Ketiga :"; cin>> c;
    
    // jika nilai a lebih besar dari b dan c maka tampilkan nilai a
    if(a > b && a > c) {i = a;}

    // jika nilai a tidak valid dan nilai b lebih besar dari nilai c maka tampilkan nilai b
    else if (b > c) {i = b;}

    // jika nilai a dan b tidak valid tampilkan nilai c
    else {i = c;}

    cout<<"Bilangan terbesar adalah : "<<i;
    cout<<endl;
}