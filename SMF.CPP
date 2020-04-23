#include<iostream.h>
#include<conio.h>
class c
{
	 static int a;
       public:	static void f1()
	{
		cout<<"a : "<<a<<endl;
	}
};
int c :: a=20;
main()
{
clrscr();
c :: f1();
//c1 :: a=10;
getch();
}