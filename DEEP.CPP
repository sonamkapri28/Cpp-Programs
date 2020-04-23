#include<iostream.h>
#include<conio.h>
class demo
{
	int a,b,*p;
	public : demo()
		{
			p=new int;
		}
		void get(int x,int y,int z)
		{
			a=x;
			b=y;
			*p=z;
		}
		void show()
		{
			cout<<"a : "<<a<<endl;
			cout<<"b : "<<b<<endl;
			cout<<"*p : "<<*p<<endl;
		}
		demo(demo &o)
		{
			a=o.a;
			b=o.b;
			p=new int;
			*p=*(o.p);
		}
		~demo()
		{
			cout<<"Release memory"<<endl;
			delete p;
		}
};
void main()
{
	demo ob1;
	clrscr();
	ob1.get(3,4,5);
	ob1.show();
	demo ob2(ob1);
	ob2.show();
	getch();
}