#include <iostream>
using namespace std;

int main (){
	float a,b,c,d,e,f,g,h,i,j;
	
	cout <<"masukan nilai A ="; cin>>a;
	cout <<"masukan nilai B ="; cin>>b;
	cout <<"masukan nilai C ="; cin>>c;
	
	d = a + 6 > 12;
    e = b > 4 + a ;
    f = c - 3 <= 8;
    g = d && e && f;
    h = d || e || f;
    i = !(b);

    cout<<"\n Hasil dari d = a + 6 > 12 adalah " <<d;
    cout<<"\n Hasil dari e = b > 4 + a adalah " <<e;
    cout<<"\n Hasil dari f = c - 3 <= 8 adalah " <<f;
    cout<<"\n Hasil dari g = d && e && f adalah " <<g;
    cout<<"\n hasil dari g = d || e || f adalah " <<h;
    cout<<"\n hasil dari !b adalah " <<i;
	
}
