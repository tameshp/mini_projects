//calculate maximum number with array

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int marks[5],i,max=0;
	for(i=0;i<5;i++)
	{
		cout<<"enter a number=\n";
		cin>>marks[i];
	}
	for (i=0;i<5;i++)
	{
		if(max<marks[i])
		{ max=marks[i];
		}
		else {
			continue;
		}
	}
	cout<<"\n\n\nthe maximum number is="<<max;
	getch();
	return(0);
}
