#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,n,temp;
	n=6;
	int A[n]={5,4,10,1,6,2};
	for(i=0;i<=n;i++)
	{
		for(j=i-1;j<=0;j++)
		{
			if(A[i]<A[j])
			{
			 temp=A[i];
			 A[i]=A[j];
			 A[j]=temp;	
			}
		}
	}
	for(i=0;i<=n;i++)
	{
		printf("%d",A[i]);
		printf("\n\n");
	}
	return 0;
}
