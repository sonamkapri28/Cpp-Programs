#include<iostream.h>
#include<conio.h>
class student
{
	protected : int rno;
		    char nm[10];
};
class teacher
{
	protected : int id;
		    char name[10];
};
class college : public student , public teacher
{
	int cid;
	char cnm[10];
	public :
		void get()
		{
			cout<<"Enter student roll no ";
			cin>>rno;
			cout<<"Enter student name ";
			cin>>nm;
			cout<<"Enter teacher id ";
			cin>>id;
			cout<<"Enter teacher name ";
			cin>>name;
			cout<<"Enter college id ";
			cin>>cid;
			cout<<"Enter college name ";
			cin>>cnm;
		}
		void show()
		{
			cout<<"Student roll no : "<<rno<<endl;
			cout<<"Student name : "<<nm<<endl;
			cout<<"Teacher id : "<<id<<endl;
			cout<<"Teacher name : "<<name<<endl;
			cout<<"College id : "<<cid<<endl;
			cout<<"College name : "<<cnm<<endl;
		}
};
void main()
{
	college c;
	clrscr();
	c.get();
	c.show();
	getch();
}