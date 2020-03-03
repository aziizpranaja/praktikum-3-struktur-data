#include<iostream>
#include<stdlib.h>
using namespace std;

int A (const char*s)
{
	int x = 0;
	for (;*s!='\0';s++)
	++x;
	return x;
}
main (void)
{
	cout<<endl;
	char string [80];
	cout<<"masukkan karakter : "; gets(string);
	cout<<"\njumlah karakter adalah : "  <<A(string);
	
	return 0;
}





