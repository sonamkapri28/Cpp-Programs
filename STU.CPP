#include<iostream.h>
#include<conio.h>
class stu
{
	int rno;
	int age;
	stu()
	{
		cin>>rno;
		cin>>age;
		display();
	}
	public:void display()
		{
			stu s;
			cout<<rno<<endl;
			cout<<age;
		}
};
void main()
{
//stu s;
clrscr();
//s.display();
getch();
}