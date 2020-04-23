#include<iostream.h>
#include<conio.h>
class A
{
	int x;
	public : A()
		{
			cout<<"I am in base class constructor"<<endl;
			x=10;
			cout<<"x is "<<x<<endl;
		}
};
class B
{
	int y;
	public : B()
		{
			cout<<"I am in intermediate class constructor"<<endl;
			y=20;
			cout<<"y is "<<y<<endl;
		}
};

class C : public B , public A
{
	int z;
	public : C()
		{
			cout<<"I am in derived class constructor"<<endl;
			z=30;
			cout<<"z is "<<z<<endl;
		}
};
void main()
{
	clrscr();
	C ob;
	getch();
}

