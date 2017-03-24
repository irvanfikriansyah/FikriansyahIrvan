#include <iostream>
using namespace std;

//prototype
int tambahkan (int a, int b);

//mainprogram
int main () {
	int a,b;	
	cout <<"Masukkan nilai a: ";
	cin >> a;
	
	cout <<"Masukkan nilai b: ";
	cin >> b;

	cout << "hasil tambah : " << tambahkan (a,b) << endl;

return 0;
}

int tambahkan (int a, int b)  {
return a + b;
}