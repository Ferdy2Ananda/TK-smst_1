#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    int a;

    cout <<"masukan bilangan: ";
    cin >>a;

    if (a == 0) {
        cout <<"bilangan 0";
    }

    else if ( a % 2 == 0 && a > 0 ) {
        cout <<"bilangan positif dan genap";
    }

    else if ( a % 2 == 0 && a < 0 ) {
        cout <<"bilangan negatif dan genap";
    }

    else if ( a % 2 != 0 && a > 0 ) {
        cout <<"bilangan positif dan ganjil";
    }

    else {
        cout <<"bilangan negatif dan ganjil";
    }

    getch();

    cout <<endl;
}