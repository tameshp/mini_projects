//displaying the matrix

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int matrix1[3][3],matrix2[3][3],matrix3[3][3],i,j,a,b,c,d;
    cout<<"enter the matrix 1=\n\n";
    for(i=0;i<3;i++)
     {
     	for(j=0;j<3;j++)
     	{
     		cin>>matrix1[i][j];
		 }
	 }
	 cout<<"enter the matrix 2=\n\n";
    for(a=0;a<3;a++)
     {
     	for(b=0;b<3;b++)
     	{
     		cin>>matrix2[a][b];
		 }
	 }
	cout<<"the matrix sum is=\n\n"; 
	for(c=0;c<3;c++)
	  {
	  	for(d=0;d<3;d++)
	  	{
	  		matrix3[c][d]=matrix1[c][d]+matrix2[c][d];
	  		cout<<matrix3[c][d];
	  		cout<<"\t";
		  }
		    cout<<"\n";
	   }
	/*
	for(c=0;c<3;c++)
	  {
	  	 for(d=0;d<3;c++)
	  	 {
	  	 	
		   }
		  cout<<"\n"; 
		  }*/    
	 getch();
	 return(0);
}
