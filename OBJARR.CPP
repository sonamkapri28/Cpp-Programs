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
		cin>>nm;
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
	student s1,s2,o1,o2;
	s1.get();
	s1.disp();
	s2.get();
	s2.disp();

	ofstream out;
	out.open("f1.txt",ios::app|ios::binary);
	out.write((char *)&s1,sizeof(s1));
	out.write((char *)&s2,sizeof(s2));
	out.close();

	ifstream in;
	in.open("f1.txt");
	in.read((char *)&o1,sizeof(o1));
	in.read((char *)&o2,sizeof(o2));

	cout<<endl<<":: Data from file ::"<<endl;
	o1.disp();
	o2.disp();
	in.close();
	getch();

}