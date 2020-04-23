#include<iostream.h>
#include<conio.h>
class A
{
	int x;
       public : A(int q)
		{
			cout<<"I am in base class constructor"<<endl;
			x=q;
			cout<<"x is "<<x<<endl;
		}
};
class B : public A
{
	int y;
	public : B(int p) : A(20)
		{
			cout<<"I am in derived class"<<endl;
			y=p;
			cout<<"y is "<<y<<endl;
		}
};
void main()
{
	clrscr();
	B ob(2);
	getch();
}