#include <iostream>
using namespace std;

//program utama
int main () {
	//variabel
	int a, b, temp;
	
	//proses baca
	cout << "Masukkan nilai A: ";
	cin >> a;
	
	cout <<"Masukkan nilai B: ";
	cin >> b;
	
	//pertukarn
	temp = b;
	b = a;
	a = temp;
	
	//hasil
	cout <<"==============="<< endl;
	cout <<"Nilai A Sekarang: " << a << endl;
	cout <<"Nilai B Sekarang: " << b <<
	
	return 0;
}