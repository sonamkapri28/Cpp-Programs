#include<iostream.h>
#include<conio.h>
#include<math.h>
int display(int=2);
void main()
{
char ch;
int a;
clrscr();
cout<<"You want to enter value [y/n] ?";
cin>>ch;
if(ch=='y')
{
	cout<<"Enter the value : ";
	cin>>a;
	cout<<"Enter user input value : ";
	int b=display(a);
	cout<<b<<endl;
}
else if(ch=='n')
{
	cout<<"Default value : ";
	int b=display();
	cout<<b;
}
else
{
	cout<<"Invalid choice";
}
getch();
}
int display(int a)
{
	int v=a;
	return v;
}