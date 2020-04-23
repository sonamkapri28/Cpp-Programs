#include<iostream.h>
#include<conio.h>
void f1();
main()
{
clrscr();
f1();
f1();
f1();
getch();
}
void f1()
{
	int k=10;
	static int count=0;
	count++;
	cout<<"Count : "<<count<<endl;
	cout<<"K : "<<k<<endl;
}