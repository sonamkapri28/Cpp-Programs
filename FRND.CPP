#include<iostream.h>
#include<conio.h>
class demo
{
	int a,b;
	public : void get()
		{
			cin>>a>>b;
		}
		void show()
		{
			cout<<a<<"\t"<<b<<endl;
		}
		friend void add(demo,demo);
};
void add(demo d,demo o)
{
	int x=d.a+o.a;
	int y=d.b+o.b;
	cout<<x<<"\t"<<y;
}
void main()
{
	clrscr();
	demo d1,d2;
	d1.get();
	d1.show();
	d2.get();
	d2.show();
	add(d1,d2);
	getch();
}