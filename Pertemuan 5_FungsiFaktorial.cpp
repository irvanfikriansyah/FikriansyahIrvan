#include <iostream>


using namespace std;

int main()
{
 int bilangan,faktor=1;
	cout<<"masukkan bilangan = ";
	cin>>bilangan;
	cout << bilangan <<"!= ";
	cout << bilangan;
 for(int a=bilangan;a>=2;a--)
 {
  faktor=a*faktor;
  cout  << "x" << a-1;
 }
 
 cout<<"= "<<faktor;
 return 0;
}