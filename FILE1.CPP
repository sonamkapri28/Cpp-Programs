#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	char ch;
	ofstream ob;
	ob.open("f1.txt",ios::out) ;
	ob<<"hello";
	ob.close();

	ofstream ob1;
	ob1.open("f2.txt",ios::out);

	ifstream obj;
	obj.open("f1.txt",ios::in);

	obj.seekg(0,ios::end);
	int pos=obj.tellg();
	cout<<pos<<endl;
	for(int i=1;i<=pos;i++)
	{
		obj.seekg(-i,ios::end);
		obj>>ch;
		cout<<ch;
		ob1<<ch;
	}
	getch();
}
