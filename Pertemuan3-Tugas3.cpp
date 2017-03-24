#include <iostream>
using namespace std;

//prototype
void prosesbaca ();
int prosestambah ();
int proseskurang ();
void prosestampil ();

//variabel
int a,b;

//Main Program
int main () {
	prosesbaca ();
	prosestampil ();
return 0;
}

//Proses Membaca
void prosesbaca () {
	cout <<"Masukkan Nilai A: ";
	cin >> a;
	cout <<"Masukkan Nilai B: ";
	cin >> b;
}

//Proses tambah
int prosestambah () {
	return a+b ;
	
}

//proseskurang
int proseskurang () {
int hasil;
hasil = a - b;
return hasil;
}

//proses tampil
void prosestampil () {
cout <<"hasil tambah : "<< prosestambah () << endl;
cout <<"hasil kurang : "<< proseskurang ();

}