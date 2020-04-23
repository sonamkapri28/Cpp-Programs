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
class B : public A
{
	int y;
	public : /*B() : A()
		{
		}  */
		void get()
		{
			cout<<"I am in derived class"<<endl;
			cout<<"Enter value of y ";
			cin>>y;
			cout<<"y is "<<y<<endl;
		}
};
void main()
{
	clrscr();
	B ob;
	ob.get();
	getch();
}