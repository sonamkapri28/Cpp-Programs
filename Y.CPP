#include<iostream.h>
#include<conio.h>
void swap(int &,int &);
void main()
{
int a=10,b=20;
clrscr();
swap(a,b);
cout<<a<<"\t"<<b<<endl;
getch();
}
void swap(int &a,int &b)
{
int t=a;
a=b;
b=t;
cout<<"No after swapping :  "<<a<<"\t"<<b<<endl;
}