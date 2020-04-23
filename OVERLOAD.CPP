#include<iostream.h>
#include<conio.h>
class demo
{
	int a,b;
	public :
		friend istream& operator >> (istream &,demo &);
		friend ostream& operator << (ostream &,demo &);
};
istream& operator >> (istream &din,demo &d)
{
	din>>d.a;
	din>>d.b;
	return din;
}
ostream& operator << (ostream &dou,demo &o)
{
	dou<<o.a;
	dou<<o.b;
	return dou;
}
void main()
{
	demo d1;
	clrscr();
	cin>>d1;//operator >> (cin,d1)
	cout<<d1;//operator <<(cout.d1)
	getch();
}