#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int no;
	cout<<"\n\n\t play game";
	cout<<"\n\n\t load game";
	cout<<"\n\n\t multiplayer";
	cout<<"\n\n\t exit";
	cout<<"\n\n\n\n\t enter your choice=  ";
	cin>>no;
	system("cls");
	switch(no)
	{
		case 1:
			
			cout<<"\n\n\t play game";
		break;
		case 2:		  
			cout<<"\n\n\t load game";
		break;
        case 3:
			cout<<"\n\n\t multiplayer";
		break;
	    case 4:
			cout<<"\n\n\t exit";
		break;
        default:
        	cout<<"\n\n\n \t wrong output!!!!!";
        break;
    }
    getch();
    return(0);
	}
 
