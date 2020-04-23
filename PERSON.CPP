#include<iostream.h>
#include<conio.h>
class person
{
	protected:int height;
	private:char nm[10];
		int age;
	public : char gender;
		void input()
		{
			cout<<"Enter name ";
			cin>>nm;
			cout<<"Enter age ";
			cin>>age;
		}
		void display()
		{
			cout<<"Name : "<<nm<<endl;
			cout<<"Age : "<<age<<endl;
		}
};
class student : public person
{
	int rno;
	public : int marks;
		void get()
		{
			input();
			cout<<"Enter roll no ";
			cin>>rno;
			cout<<"Enter marks ";
			cin>>marks;
			cout<<"Enter gender ";
			cin>>gender;
			cout<<"Enter height ";
			cin>>height;
		}
		void show()
		{
			display();
			cout<<"Roll no : "<<rno<<endl;
			cout<<"Marks : "<<marks<<endl;
			cout<<"Gender : "<<gender<<endl;
			cout<<"Height : "<<height<<endl;
		}
};
void main()
{
	student s;
	clrscr();
	s.get();
	s.show();
	getch();
}
