//program to store 5 values and add them
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int marks[5],i,sum=0;
	for(i=0;i<5;i++)
	   {
	   	cout<<"enter the marks= \n";
	   	cin>>marks[i];
	   	sum=sum+marks[i];
	   }
	cout<<"\n\n\ntotal marks is=\t"<<sum;
	getch();
	return(0);   
}
