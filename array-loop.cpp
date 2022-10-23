#include <iostream>
using namespace std;

int main() {
    // membuat array kosong
    int kontol [5];

    // mengisi array
    kontol[0] = 70;
    kontol[1] = 23;
    kontol[2] = 64;
    kontol[3] = 67;
    kontol[4] = 72;

    // mencetak isi array dengan perulangan
    for(int z; z < 5; z++) {
        // %d: simbol untuk menampilkan nilai angka atau bilangan desimal
        printf("kontol ke-%d: %d\n", z, kontol[1]);
    }
    return 0;
}