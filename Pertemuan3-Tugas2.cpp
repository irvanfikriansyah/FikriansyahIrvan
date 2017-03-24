#include <iostream>
using namespace std;
//prototype
void prosesbaca ();
void prosestukar ();
void prosestampil ();

int a,b, temp;

//main program
int main () {
	prosesbaca ();
	prosestukar ();
	prosestampil ();
	return 0;
	}
	
//proses baca
	void prosesbaca () {
	cout << "Masukkan Nilai A: ";
	cin >> a;
	
	cout << "Masukkan Nilai B: ";
	cin >> b;
	}

//proses tukar
	void prosestukar () {
		temp = b;
		b = a;
		a = temp;
	}
		
//proses tampil		
	void prosestampil () {
	cout <<"==============="<< endl;
	cout <<"Nilai A Sekarang : " << a << endl;
	cout <<"Nilai B Sekarang : " << b;
	
	}