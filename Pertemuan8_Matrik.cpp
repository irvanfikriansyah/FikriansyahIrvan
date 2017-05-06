#include <iostream>
using namespace std;

int i,j;

int main () {
	int M [3] [3] ;
	
	for (int i = 0; i < 3; i++)
	{ 
		for  (int j = 0; j <3; j++)
			{
			cout << "Masukkan data baris ke:" << i  << "    "  << "kolom :" << j << endl ;
				cin >> M [i] [j] ;
			}
	}
	
	cout << M [3] [1];
	return 0;
	
}