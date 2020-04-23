#include<iostream.h>
#include<conio.h>
inline void f1();
void main()
{
clrscr();
cout <<"I am in main fn"<<endl;
f1();
getch();
}
void f1()
{
cout <<"I am in f1 fn";
}