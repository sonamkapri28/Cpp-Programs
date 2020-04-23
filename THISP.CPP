#include<iostream.h>
#include<conio.h>
class A
{
	int l,b;
	public : void set(int l,int b)
		{
			this->l=l;
			this->b=b;
		}
		void disp()
		{
			cout<<l<<endl<<b;
		}
};
void main()
{
	clrscr();
	A ob;
	ob.set(10,20);
	ob.disp();
	getch();
}