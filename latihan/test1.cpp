#include<iostream>
using namespace std;

int main() { 
    float angka, total = 0, rata;
    int jumlah;

    cout <<"masukkan jumlah angka: "; cin >> jumlah;
    cout <<endl;

    /*
    variabel i
    var i dimulai dari angka 0
    hitungan 'i' ditentukan oleh bilangan 'int jumlah'
    var i akan terus bertambah sesuai masukan dari 'int jumlah'
    */

    for (int i = 0; i < jumlah; i++) {
                                    // input berupa angka karena float
        cout << "Masukkan angka: "; cin >> angka;
        total = total + angka;
    }

    cout << endl;

    cout << "Total: " << total << endl;
    rata = total / jumlah;
    cout << "Rata-rata: " << rata;
    
    cout <<endl;
}