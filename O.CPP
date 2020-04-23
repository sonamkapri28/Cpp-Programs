#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	char a[20];
	ofstream ob;
	ob.open("f1.txt",ios::out);
	cout<<"Enter character ";
	cin.getline(a,20) ;
	ob<<a;
	ob.close();
	ifstream obj;
	obj.open("f1.txt",ios::in);
	cout<<"Character : "<<a<<endl;
	obj.close();
	getch();
}
