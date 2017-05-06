#include <iostream>
using namespace std;

int i,j;

int main () {
	int M [3] [3];
	int M1 [3] [3];
	int M2 [3] [3];
	
	for (int i = 0; i< 3; i++) {
		for (int j= 0; j< 3; j++) 
		{
			cout << "Masukkan Matrik 1 baris ke:" << i  << "    "  << "kolom :" << j << endl ;
			cin >> M1 [1] [j];
			cout << "Masukkan Matrik 2 baris ke:" << i  << "    "  << "kolom :" << j << endl ;
			cin >> M2 [1] [j];
		M [i] [j] = M1 [i] [j] + M2 [i] [j];
		}
		
	}
	cout << M [2] [2];
	return 0;
}
		