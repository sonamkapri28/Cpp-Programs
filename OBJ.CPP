#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class student
{
	int rno;
	char nm[20];
	int age;
	public:void get()
	{
		cout<<"Enter roll no ";
		cin>>rno;
		cout<<"Enter name ";
		cin.ignore();
		cin.getline(nm,20);
		cout<<"Enter age ";
		cin>>age;
	}
	void disp()
	{
		cout<<"Roll no. => "<<rno<<endl;
		cout<<"Name => "<<nm<<endl;
		cout<<"Age => "<<age<<endl;
	}
};
void main()
{
	clrscr();
	student s[2];
	int i;
      for(i=0;i<2;i++)
	{
		s[i].get();
	}
	ofstream out;
	out.open("z3.txt",ios::app|ios::binary);
	for(i=0;i<2;i++)
	{       //s[i].get();
		out.write((char *)&s[i],sizeof(s));
	}
	out.close();

	ifstream in;
	student o[2];

	in.open("z3.txt",ios::in|ios::binary);
	for(i=0;i<2;i++)
	{
		in.read((char *)&o[i],sizeof(o));
		o[i].disp();
	}
	in.close();
	getch();

}