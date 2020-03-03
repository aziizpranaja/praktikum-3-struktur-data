#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char kata[99];
	cout<<"masukkan kata : "; 
	cin>>kata;
	strupr(kata);
	cout<<"kata menjadi huruf kapital : "<<kata<<endl;
}
