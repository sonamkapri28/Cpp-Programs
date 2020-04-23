#include<iostream.h>
#include<conio.h>
class emp
{
	int eid;
	char nm[10];
	float sal;
	void input();
	public :
		void display();
};
void emp :: input()
{
	cout<<"Enter employee id ";
	cin>>eid;
	cout<<"Enter employee name ";
	cin>>nm;
	cout<<"Enter employee salary ";
	cin>>sal;
}
void emp :: display()
{
	input();
	cout<<"Employee id is : "<<eid<<endl;
	cout<<"Employee name is : "<<nm<<endl;
	cout<<"Employee salary is : "<<sal;
}
void main()
{
	emp e;
	clrscr();
	e.display();
	getch();
}