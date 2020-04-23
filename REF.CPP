#include<iostream.h>
#include<conio.h>
class A
{
	public:
		void f1()
		{
			cout<<"I am in base f1"<<endl;
		}
		virtual void f2()
		{
			cout<<"I am in base f2"<<endl;
		}
		virtual void f3()
		{
			cout<<"I am in base f3"<<endl;
		}
		virtual void f4()
		{
			cout<<"I am in base f4"<<endl;
		}
};
class B : public A
{
	public :
		void f1()
		{
			cout<<"I am in child f1"<<endl;
		}
		void f2()
		{
			cout<<"I am in child f2"<<endl;
		}
		void f4(int x)
		{
			cout<<"I am in child f4"<<endl;
		}
};
void main()
{
	clrscr();
	A *p;
	B ob;
	p=&ob;
	p->f1();
	p->f2();
	p->f3();
	p->f4();
	//p->f4(5);
	getch();
}