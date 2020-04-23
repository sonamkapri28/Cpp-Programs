#include<iostream.h>
#include<conio.h>
class c
{   static int a;
	public:// static int a;
		void f1()
		{
			a=10;
			cout<<"a : "<<a<<endl;
		}
};
int c :: a;
main()
{
clrscr();
c ob;
ob.f1();
getch();
}