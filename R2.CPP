#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	char nm[30];
	ofstream ob;
	ob.open("f3.txt",ios::out);
	cout<<"Enter line ";
	cin.getline(nm,30);
	ob<<nm;
	int pos=ob.tellp();
	cout<<"\t"<<"Position put = "<<pos<<endl;
	ob.close();
	ifstream in;
	in.open("f3.txt");
	while(!in.eof())
	{
	int pos1=in.tellg();
	char ch=in.get();
	cout<<ch<<"\t"<<"Position get = "<<pos1<<endl;
	}
	in.close();
	getch();
}