#include<iostream>
#include<conio.h>
using namespace std;
void swap(int*,int*);
int main()
{
	int a,b;
	cout<<"Enter a=";
	cin>>a;
	cout<<"\n \n Enter b=";
	cin>>b;
	swap(&a,&b);
	cout<<"After swap \n a= "<<a<<"\n\n b= "<<b;
	getch();
	return(0);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
