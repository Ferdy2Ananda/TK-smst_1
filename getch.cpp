#include <iostream>
#include <conio.h>
using namespace std;

main() {
    int a;      //tipe integer (bilangan bulat)
    float b;    //tipe integer float (bilangan real)
    char c;     //tipe karakter
    char d[12] = "algoritma";

    // inisialisasi variabel
    a = 2;
    b = 4.5;
    c = 'A';

    /*menampilkan isi variable konsol
     *%d untuk integer, %f untuk float, %c untuk char, %s untuk string
    */

   cout <<"a = " << a << endl;
   cout <<"b = " << b << endl;
   cout <<"c = " << c << endl;
   cout <<"d = " << d << endl;

   getch();
   return 0;
}