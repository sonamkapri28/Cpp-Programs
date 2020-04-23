#include<iostream.h>
#include<conio.h>
class complex
{
	int real;
	int imag;
	public : void get(int x,int y)
		 {
			real=x;
			imag=y;
		 }
		 void show()
		 {
			cout<<"Real : "<<real<<endl;
			cout<<"Imaginary : "<<imag<<endl<<endl;
		 }
		 complex operator + (complex c)
		 {
			complex t;
			t.real=real+c.real;
			t.imag=imag+c.imag;
			return t;
		 }
};
void main()
{
	complex c1,c2,c3;
	clrscr();
	c1.get(3,4);
	c2.get(5,6);
	c1.show();
	c2.show();
	c3=c1+c2;
	c3.show();
	getch();
}