#include<iostream.h>
#include<conio.h>
#include<exception>
//using namespace std;

void main()
{
	clrscr();
	int a,b;
	cout<<"Enter a and b : ";
	cin>>a;
	try
	{
		if(a>=0)
		{
			cout<<a;
		}
		else
		{
			throw(a);
		}
	}
	catch(int x)
	{
		cout<<"Exception divide by zero";
	}
	getch();
}