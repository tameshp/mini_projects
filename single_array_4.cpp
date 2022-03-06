//calculate acending order

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int marks[100],a,i,temp,n;
	cout<<"enter the array size=\t";
	cin>>n;
	cout<<"\n";
	//system("cls");
     for(a=0;a<n;a++)
	{
		cout<<"enter a number=\n";
		cin>>marks[a];
	}
	for(a=0;a<n;a++)
	{
		for(i=a+1;i<n;i++)
		{
			if(marks[a]>marks[i])
			{
				temp=marks[a];
				marks[a]=marks[i];
				marks[i]=temp;
			}
			else
			continue;
		}
	}
	cout<<"\n\n\n Assending order is= \n";
	for(a=0;a<n;a++)
	{
		cout<<"\n"<<marks[a];
	}
	getch();
	return(0);
}
