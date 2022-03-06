

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 2

struct Customer{
	int CustomerID;
	char fullname[50],email[20],gender[10];
	float creditlimit;
	int age;
	
};

struct Customer findHighest(struct Customer*);
void readCustomer(struct Customer*);
void displayCustomer(struct Customer*);


int main(){
	
struct Customer s[SIZE], *sPTR, highest;
readCustomer(&s[0]);
displayCustomer(&s[0]);
highest=findHighest(&s[0]);
printf("\n the customer with highest credit limit is %s with %d customer id and credit limit %f",highest.fullname,highest.CustomerID, highest.creditlimit);
getch();
return 0;

void readCustomer (struct Customer*sPTR){
 int i;
for (i=0 ; i<SIZE; i++) {
printf ("\nEnter the customer ID : ");
scanf ("%d", &((sPTR+i)->CustomerID));
 printf ("Enter the full nAme: "); 
fflush (stdin);
gets ((sPTR+i)->fullname);
printf ("Enter the Email address: ");
 fflush (stdin);
gets ((sPTR+ i)->email );
 printf ("Enter the age : ");
scanf ("%d", &((sPTR+i)->age )); 
printf ("Enter the gender: "); 
fflush (stdin);
gets ((sPTR+i)->gender);
printf ("Enter the credit limit: ");
scanf ("\f", &((sPTR+i)->creditlimit));

void displayCustomer (struct Customer*sPTR) {
int i;
for  ( i=0 ; i<SIZE ; i++ ) {
printf ( "\nThe  Customer  ID  is %d", ( sPTR+ i ) ->CustomerID) ;
 printf ( "\n The  f u ll name  is % s", ( sPTR+ i ) ->fullname ) ;
printf  ("\nThe Ema il address is % s", (sPTR+ i) ->email ) ;
printf ("\nThe age is %d", (sPTR+i)->age);
printf ("\nThe gender is %s",(sPTR+i )->gender);
printf ("\nThe credit limit is %f\n\n", (sPTR+i)->creditlimit );
}
}

struct Customer findHighest (struct Customer*sPTR){
 int i, max_index=0 ;
int max = sPTR->creditlimit;
 for (i=0 ; i<SIZE; i++){
       if((sPTR+i)->creditlimit>max ){
       max = (sPTR+i)->creditlimit;
       max_index=i;
}
}
return *(sPTR+max_index);
}}}}; 



