#include <iostream>
using namespace std;

int main(){

    // deklarasi tipe data variabel
    string nama;
    int umur;
    char jenis_kelamin;

    // proses output
    cout<<"siapa kamu?\n";
    cout<<"jawab: ";
    // menyimpan data ke variabel
    getline(cin,nama);

    // proses output
    cout<<"berapa umur mu? \n";
    cout<<"jawab: ";
    // menyimpan data ke variabel
    cin>>umur;

    // proses output
    cout<<"jenis kelaminmu : ";
    // menyimpan data ke variabel
    cin>>jenis_kelamin;

    // proses output
    cout<<"salam kenal, " <<nama <<" sekarang dirimu berusia ";
    cout<<umur <<" jenis kelaminmu " <<jenis_kelamin;

    return 0;
}