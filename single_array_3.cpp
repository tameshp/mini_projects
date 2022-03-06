//calculate decending order

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int marks[5],a,i,temp;
	for(a=0;a<5;a++)
	{
		cout<<"enter a number=\n";
		cin>>marks[a];
	}
	for(a=0;a<5;a++)
	{
		for(i=a+1;i<=5;i++)
		{
			if(marks[a]<marks[i])
			{
				temp=marks[a];
				marks[a]=marks[i];
				marks[i]=temp;
			}
			else
			continue;
		}
	}
	cout<<"\n\n\nDecending order is= \n";
	for(a=0;a<5;a++)
	{
		cout<<"\n"<<marks[a];
	}
	getch();
	return(0);
}
