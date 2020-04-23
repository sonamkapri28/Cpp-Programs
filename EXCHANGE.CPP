#include<iostream.h>
#include<conio.h>
class B;
class A
{
	int x;
	public : void assign(int t)
		{
			x=t;
		}
		void display()
		{
			cout<<"value of x is : "<<x<<endl;
		}
		friend void swap (A&,B&);
};
class B
{
	int y;
	public : void assign(int w)
		{
			y=w;
		}
		void display()
		{
			cout<<"value of y is : "<<y<<endl;
		}
		friend void swap (A&,B&);
};
void swap(A &c,B &d)
{
	int temp;
	temp=c.x;
	c.x=d.y;
	d.y=temp;
}
void main()
{
	A n;
	B m;
	int a,b;
	clrscr();
	cout<<"Enter x : ";
	cin>>a;
	cout<<"Enter y : ";
	cin>>b;
	n.assign(a);
	m.assign(b);
	swap(n,m);
	n.display();
	m.display();
	getch();
}