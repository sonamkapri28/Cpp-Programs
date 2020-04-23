#include<iostream.h>
#include<conio.h>
#include<math.h>
int power(int,int=2);
void main()
{
int a,b;
char ch;
clrscr();
cout <<"Enter base : ";
cin >>a;
cout <<"You want to enter the exponent [y/n] ?";
cin >>ch;
if(ch=='y')
{
	cout<<"Enter the exponent : ";
	cin>>b;
	int p=power(a,b);
	cout<<"Power with user input exponent is : "<<p;
}
else if(ch=='n')
{
	int p1=power(a);
	cout<<"Power with default exponent is : "<<p1;
}
else
{
	cout<<"Invalid choice";
}
getch();
}
int power(int a,int b)
{
	int po=pow(a,b);
	return po;
}