#include<iostream.h>
#include<conio.h>
class date
{
	int d,m,y;
	public : void get()
		{
			cout<<"Enter date : ";
			cin>>d;
			cout<<"Enter month : ";
			cin>>m;
			cout<<"Enter year : ";
			cin>>y;
		}
		void show()
		{
			cout<<"Date :"<<d<<" Month : "<<m<<" Year : "<<y<<endl;
		}
		friend date operator + (date &,int );
		friend date operator - (date &,int );
};
		date operator + (date &o,int i)
		{
			date z;
			z.d=o.d+i;
			z.m=o.m;
			z.y=o.y;
			return z;
		}
		date operator - (date &o,int i)
		{
			date z;
			z.d=o.d-i;
			z.m=o.m;
			z.y=o.y;
			return z;
		}

void main()
{
	date d1,d2,d3;
	clrscr();
	d1.get();
	d3=d1-1;
	cout<<endl<<"Previous date => ";
	d3.show();
	cout<<endl<<"Present date => ";
	d1.show();
	d2=d1+1;
	cout<<endl<<"Next date => ";
	d2.show();
	getch();
}