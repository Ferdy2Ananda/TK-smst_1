#include <iostream>
using namespace std;

int main() {
    // isi awal array
    char huruf[5] = {'a','b','c','d','e'};

    // mengambil data pada array
    cout <<"huruf: " <<huruf[2] <<endl;

    // mengubah isi data pada array
    huruf[3] = 'z';
    cout <<"huruf: " <<huruf[3] <<endl;

    return 0;
}