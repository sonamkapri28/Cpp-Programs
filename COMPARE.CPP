#include<iostream.h>
#include<conio.h>
class unary
{
	int x,y;
	public: void get()
		{
			cout<<"Enter x : ";
			cin>>x;
			cout<<"Enter y : ";
			cin>>y;
		}
		void show()
		{
			cout<<"x : "<<x<<endl<<"y : "<<y<<endl;
		}
		unary operator ++ (int)
		{
			unary u;
			u.x=x++;
			u.y=y++;
			return u;
		}
};
void main()
{
	unary u1,u2;
	clrscr();
	u1.get();
	u1.show();
	u2=u1++;
	u2.show();
	getch();
}