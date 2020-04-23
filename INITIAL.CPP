#include<iostream.h>
#include<conio.h>
class A
{
	int x;
	int &y;
	public : A(int &n) : y(n)
		{
			x=10;
		}
		void disp()
		{
			cout<<"x : "<<x<<endl<<"y : "<<y<<endl;
		}
};
void main()
{
	clrscr();
	int m=5;
	A ob(m);
	ob.disp();
	getch();
}