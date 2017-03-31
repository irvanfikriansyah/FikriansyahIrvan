#include <iostream>
using namespace std;

bool iswithinrange (float nilai, int max, int min);
void prosescetak ();

float nilai_ip, total_nilai;
int jml_mahasiswa, jml_lulus, jml_tidaklulus;
bool valid;

int main () {
	do { 
		cout << "masukkan nilai : ";
		cin >> nilai_ip;
		valid = iswithinrange (nilai_ip, 4, 0);
		if (valid) { 
			if (nilai_ip >=2.75) {
			jml_lulus++;
			} 
		
			else {
			jml_tidaklulus++;
			}
		
		total_nilai = total_nilai + nilai_ip;
		jml_mahasiswa++;
		} 
		
		else {
			cout << "Nilai Salah" << endl;
		}
	}


	while (nilai_ip != -999);
	prosescetak();
}


bool iswithinrange (float nilai, int max, int min) {
	if (nilai >= max || nilai <= 0) {
			return false;
	}
	return true;
}
	
void prosescetak () {
	cout << "jumlah mahasiswa: " << jml_mahasiswa << endl;
	cout << "jumlah lulus: " << jml_lulus << endl;
	cout << "jumlah tidak lulus: " << jml_tidaklulus << endl;
	cout << "rata-rata nilai: " << (total_nilai/jml_mahasiswa) << endl;
}