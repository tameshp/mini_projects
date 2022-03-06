#include<iostream>
#include<conio.h>
using namespace std;
class demo{
	static int x;
	public:
		static void display(){
			cout<<"the value of x="<<x<<endl;
		}
		
};
int demo::x=10;
int main(){
	demo x;
	x.display();
	
	
}
