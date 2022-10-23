#include <iostream>
using namespace std;

int main(){
    int i;

    cout<<"input bilangan: ";
    cin >>i;

    // jika nilai `i` tidak habis di bagi 2 maka tampilkan genap
    if( i % 2 == 0) {
        cout<< i <<" genap";
        cout <<endl;
    }
    // dan jika habis tampilkan nilai ganjil
    else {
        cout<< i <<" ganjil";
        cout<<endl;
    }
}