#include <iostream>
using namespace std;

int main(){
    cout<<"mencari nilai terbesar";
    cout<<endl;

    int input, angka, o, angka_terbesar;

    cout <<"input jumlah bilangan: ";
    cin >>angka;
    cout<<"input" <<angka <<"jumlah angka: ";
    cout<<endl;

    for(o = 1; 0 < angka; o++) {
        cin>>input;
    }

    angka_terbesar = input;
    for (o = 0; 0 < angka; o++) {
        if (input > angka_terbesar){
            angka_terbesar = input;
        }
    }
    cout <<"jadi bilangan terbesar adalah: " <<angka_terbesar;
    cout <<endl;
}