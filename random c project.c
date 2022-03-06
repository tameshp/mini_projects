

#include <stdio.h>
 #include <conio.h>
 #include <string.h>
#include <stdlib.h>
 define SIZE 2

 ///declaring the structures
 struct Customer{
 int customerID;
 char ful1Name [50], email [20], gender [lO J ;
 float creditLimit;
 int age; 15 };
 struct Customer findHighest (struct Customer *};
 void readCustomer (struct Customer*);
 void displayCustomer (struct Customer*); 
 ///Declaring main
 int main (){
  ///declare the structure
 struct Customer s [SIZE], *sPTR, highest;
  readCustomer (&s[O J );
 displayCustomer (&s[O J );
 ///to find the list of a customer having highest credit limit
 highest = find.Highest (&s (O ]l ;
  printf ("\nThe customer with highest credit limit is %s with %d Customer ID and credit limit %f.",highest. fullName, highest .customerID, highest .creditLimit );"
 getch ();
 return O ;
///function to read customer's details
void readCustomer (struct Customer*sPTR){ int i;
for (i=O ; i<SIZE; i++) {
printf ("\nEnter the customer ID : "); scanf ("%d", &((sPTR+i)->customerID );
 printf ("Enter the full name:" );
  fflush (stdin);
gets ((sPTR+i)->fullName);
printf ("Enter the Email address: ");
 fflush (stdin);
gets ((sPTR+i)->email );
printf ("Enter the age: ");
 scanf ("%d", &((sPTR+i)->age ));
 printf ("Enter the gender: ");
 fflush (stdin);"
gets ((sPTR+i)->gender );
printf ("Enter the credit limit: ");
 scanf ("%f", &((sPTR+i)->creditLimit );
}///loop ends
}///function ends
///function displaying the customer's details
void displayCustomer (struct Customer *sPTR){ int 1;
for (i=O ; i<SIZE; i++) {
printf ("\nThe customer ID is %d", (sPTR+i)->customerID );
 printf ("\nThe full name is %s", (sPTR+i)->fullName);
printf ("\nThe Email address is %s",(sPTR+i)->email );
printf ("\nThe age is %d'", (sPTR+i)->age);
printf ("\nThe gender is %s'",(sPTR+i )->gender);
printf ("\nThe credit limit is %f\n\n'", (sPTR+i)->creditLimit );
}///loop ends
)///function ends
///function to display the list of customer having highest credit limit
struct Customer findHighest (struct Customer *sPTR){ int i, max_index=O ;
int max = sPTR->creditLimit; for (i=O ; i<SIZE; i++}{
if((sPTR+i)->creditLimit>max ){
max = (sPTR+i)->creditLimit; max index=i;
}///if ends
}///for loop ends
return *(sPTR+max index);
}; ///function ends










