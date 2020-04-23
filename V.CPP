#include<iostream.h>
#include<conio.h>
class stu
{
	int rno;
	int age;
	public: stu()
		{
			cin>>rno;
			cin>>age;
		}
		void show()
		{
			cout<<rno<<endl;
			cout<<age<<endl;
		}
		stu(stu &);
};
stu :: stu(stu &s2)
		{
			rno=s2.rno;
			age=s2.age;
		}
main()
{
	clrscr();
	stu s;
	stu s1(s);
	s.show();
	s1.show();
	getch();
}