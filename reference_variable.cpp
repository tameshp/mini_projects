#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=100;
	int &ref=a;
	cout<<"value of a="<<a;
	cout<<"\nvalue of ref="<<ref;
	cout<<"\naddress of a="<<&a;
	cout<<"\naddress of ref="<<&ref;
	getch();
	return(0);
}
