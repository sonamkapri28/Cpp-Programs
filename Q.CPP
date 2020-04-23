#include<iostream.h>
#include<conio.h>
class student
{
		int rno;
		char nm[10];
public : 	void input();
		void display();
};
		void student :: input()
		{
			cout<<"Enter your roll no ";
			cin>>rno;
			cout<<"Enter your name ";
			cin>>nm;
		}
		void student :: display()
		{
			cout<<"Roll no is "<<rno<<endl;
			cout<<"Name is "<<nm;
		}

void main()
{
	student s;
	clrscr();
	s.input();
	s.display();
	getch();
}