#include<iostream.h>
#include<conio.h>
class demo
{
	int a;
	public : void get()
		{
			cin>>a;
		}
		void show()
		{
			cout<<a<<endl;
		}
		friend demo operator + (demo ,demo);
};
demo operator + (demo c,demo o)
{
	demo sum;
	sum.a=c.a+o.a;
	return sum;
}
void main()
{
	demo c1,c2,c3;
	clrscr();
	c1.get();
	c1.show();
	c2.get();
	c2.show();
	c3=c1+c2;
	c3.show();
	getch();
}