#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	char ch[20];
	ofstream ob;
	ob.open("f1.txt",ios::out);
	ob<<"hello world";
	ob.close();

	ifstream obj;
	obj.open("f1.txt",ios::in);

//	obj.seekg(0,ios::end);

	while(!obj.eof())
	{
		obj>>ch;
		cout<<ch;
		int pos=obj.tellg();
		cout<<"\t"<<pos<<endl;

	}
	getch();
}