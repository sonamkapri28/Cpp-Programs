#include<iostream.h>
#include<conio.h>
int add(int=1,int=2,int=3);
void main()
{
clrscr();
int sum=add();
cout <<"Sum is "<<sum<<endl;
int sum1=add(2);
cout <<"Sum is "<<sum1<<endl;
int sum2=add(20,30,40);
cout <<"Sum is "<<sum2;
getch();
}
int add(int a,int b,int c)
{
int s=a+b+c;
return s;
}