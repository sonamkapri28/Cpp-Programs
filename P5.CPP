#include<iostream.h>
#include<conio.h>
void main()
{
int n,fact=1;
clrscr();
cout <<"Enter the number ";
cin >>n;
while(n!=0)
{
	fact=fact*n;
	n--;
}
cout <<"Factorial of a number is "<<fact;
getch();
}