#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int rno;
	char nm[10];
	int age;
	student(int r,char n[],int a)
	{
		rno=r;
		strcpy(nm,n);
		age=a;
		cout<<rno<<endl;
		cout<<nm<<endl;
		cout<<age<<endl;
	}
	public:student()
		{
			student(1,"abc",23);
		}
}
main()
{
	clrscr();
	student s;
	getch();
}