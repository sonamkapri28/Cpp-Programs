#include<iostream.h>
#include<conio.h>
class shape
{
	int l,b;
	public:void set()
		{
			cout<<"Enter length and breadth ";
			cin>>l>>b;
		}
		/*void dis()
		{
			cout<<"l : "<<l<<endl<<"b : "<<b<<endl;
		}*/
};
class rectangle : public shape
{
	int l,b;
	public:void dis()
		{
			cout<<"l : "<<l<<endl<<"b : "<<b<<endl;
		}
};
void main()
{
	clrscr();
	shape *p,o;
	rectangle ob;
	p=&o;
	p=&ob;
	p->set();
	(shape)p->dis();
	getch();
}