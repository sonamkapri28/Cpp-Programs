#include<iostream.h>
#include<conio.h>
int add(int,int,int=0);
void main()
{
int a=10,b=20,c=30;
clrscr();
int sum=add(a,b);
cout <<"Sum of 2-digit is "<<sum<<endl;
int sum1=add(a,b,c);
cout <<"Sum of 3-digit is "<<sum1;
getch();
}
int add(int a,int b,int c)
{
int s=a+b+c;
return s;
}