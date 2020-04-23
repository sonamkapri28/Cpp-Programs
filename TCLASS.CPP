#include<iostream.h>
#include<conio.h>
class B;
class A
{
	int x;
	public : void get()
		{
			cin>>x;
		}
		void show()
		{
			cout<<x<<endl;
		}
		friend void add(A,B);
};
class B
{
	int y;
	public : void get()
		{
			cin>>y;
		}
		void show()
		{
			cout<<y<<endl;
		}
		friend void add(A,B);
};
void add(A o,B o1)
{
	int z;
	z=o.x+o1.y;
	cout<<z;
}
void main()
{
	A a;
	B b;
	clrscr();
	a.get();
	a.show();
	b.get();
	b.show();
	add(a,b);
	getch();
}