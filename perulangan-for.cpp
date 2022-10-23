#include <iostream>
using namespace std;

int main() {
    // i=0 hitungan akan dimulai dari 0
    // 1<10 hitungan nya akan sampai 10
    // i++ disetiap perulangan i akan bertambah
    // var 'i' pada perulangan berfungsi menyimpan hitungan
    for(int i = 0; i < 10; i++) {
        printf("perulangan ke-%i \n",i);
    }
    // membuat hitungan mundur
    for(int d = 10; d > 0; d--){
        printf("perulangan ke-%i \n", d);
    }
    
    return 0;
}