#include<iostream.h>
#include<conio.h>
class emp
{
	int a,b;
	public : void get()
		{
			cin>>a>>b;
		}
		void show()
		{
			cout<<a<<endl<<b<<endl;
		}
		void display(emp *e)
		{
			a=e->a;
			b=e->b;
			e->a=e->a+10;
			e->b=e->b+20;
		}
};
main()
{
	emp e1,e2;
	clrscr();
	e1.get();
	e2.display(&e1);
	e1.show();
	e2.show();
	getch();
}