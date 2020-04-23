#include<iostream.h>
#include<conio.h>
class complex
{
	public:int x,y;
		complex(int a,int b)
		{
			x=a;
			y=b;
			cout<<"x is "<<x<<endl;
			cout<<"y is "<<y<<endl;
		}
		complex(int c)
		{
			x=c;
			cout<<"x is "<<x;
		}
};
main()
{
clrscr();
complex c1(3,4),c2(5);
getch();
}