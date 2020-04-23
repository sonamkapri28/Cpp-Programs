#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int rno;
	char nm[10];
	int age;
	public:student()
		{
			rno=10;
			strcpy(nm,"abc");
			age=25;
		}
		void show()
		{
			cout<<"Roll no : "<<rno<<endl;
			cout<<"Name : "<<nm<<endl;
			cout<<"Age : "<<age<<endl;
		}
};
void main()
{
	clrscr();
	student s1;
	s1.show();
	student s2(s1);
	s2.show();
	getch();
}