#include <iostream>
using namespace std;

int main (){
	float a,b,c,d,e,f,g,h;
	
	cout <<"masukan nilai A ="; cin>>a;
	cout <<"masukan nilai B ="; cin>>b;
	cout <<"masukan nilai C ="; cin>>c;
	
	d = a + 6 > 12;
    e = b > 4 + a ;
    f = c - 3 <= 8;
    g = d || e || f;

	cout <<"\n === Program Ekspresi AND ===";
    cout <<"\n Hasil dari d = a + 6 > 12 adalah "<<d;
    cout <<"\n Hasil dari e = b > 4 + a adalah " <<e;
    cout <<"\n Hasil dari f = c - 3 <= 8 adalah " <<f;
    cout <<"\n Hasil dari g = d || e || f adalah " <<g;
    
}
