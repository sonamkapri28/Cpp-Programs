#include<iostream.h>
#include<conio.h>
#include<string.h>
class book
{
	public:int bid;
	       float price;
	       char title[20];
};
void main()
{
book b;
clrscr();
b.bid=1;
b.price=850.75;
strcpy(b.title,"Programming in C++");
cout<<"Book id is "<<b.bid<<endl;
cout<<"Book price is "<<b.price<<endl;
cout<<"Book tiltle is "<<b.title;
getch();
}