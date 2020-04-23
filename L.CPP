#include<iostream.h>
#include<conio.h>
class student
{
	int rno;
	char nm[10];
	int age;
	public:
		student();
		void display();
};
student :: student()
		{
			cout<<"Enter roll no. ";
			cin>>rno;
			cout<<"Enter name ";
			cin>>nm;
			cout<<"Enter age ";
			cin>>age;
		}

void student :: display()
{
	cout<<"Roll no. : "<<rno<<endl;
	cout<<"Name : "<<nm<<endl;
	cout<<"Age : "<<age<<endl;
}
main()
{
	int i;
	clrscr();
	student s[3];
	for(i=0;i<3;i++)
	{
		s[i].display();
	}
	getch();
}