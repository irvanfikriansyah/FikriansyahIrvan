 #include <iostream.>
 using namespace std;

void persegipanjang()
{
int p, l, t;
	cout<<"Luas Persegi Panjang"<<endl;
	cout<<"Masukkan panjang: ";
	cin>>p;
	cout<<"Masukkan lebar: ";
	cin>>l;
	cout<<"Masukkan tinggi: ";
	cin>>t;
	cout<<"Volume Persegi Panjang: "<< p*l*t <<endl;
}

int main ()
{
	persegipanjang ();
	
	return 0;
}

