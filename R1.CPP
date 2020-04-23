#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	char c[20],c1[20],a,b;
	ofstream out;
	out.open("f1.txt",ios::out);
	cout<<"Enter a sentence ";
	cin.getline(c,20);
	out<<c;
	cout<<"Enter another sentence ";
      cin.getline(c1,20);
	out<<c1;
	cout<<"Written successfully"<<endl;
	out.close();
	ifstream in;
	in.open("f1.txt",ios::in);
	cout<<"Character : "<<a;
	in>>a;
	while(!in.eof())
	{
		cout<<a;
		a=in.get();
	}
	cout<<endl<<"Reading Successful"<<endl;
       in.close();
	getch();
}