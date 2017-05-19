#include <iostream>
using namespace std;

int i,c;

int main() {

int A[4]; 
	for (i=0; i<4;i++){
		cout << "masukkan jumlah data array" << endl;
		cin >> A [i];
		}
	
cout << "masukan jumlah data yang akan dicari" << endl;
cin >> c;
for (i=0;i<4;i++) {
	if (A[i]== c){
		cout << "data: "<< c << "ditemukan pada indeks ke: "<< i << endl;
	}
	break;
	else {
		cout << "data tidak ditemukan" << endl;
	}
	
}

return 0;

}
		


