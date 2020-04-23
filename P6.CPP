#include<iostream.h>
#include<conio.h>
void main()
{
int n,f1=0,f2=1,i,next;
clrscr();
cout <<"Enter the number ";
cin >>n;
cout <<"Fibonacci series : "<<f1<<"\t"<<f2<<"\t";
for(i=2;i<n;i++)
{
	next=f1+f2;
	cout <<next<<"\t";
	f1=f2;
	f2=next;
}

getch();
}