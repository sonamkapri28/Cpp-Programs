#include<iostream.h>
#include<conio.h>
class complex
{
	int real;
	int imag;
	public:
	void input(int a,int b)
	{
		real=a;
		imag=b;
	}
	void display()
	{
		cout<<"Real part is "<<real<<endl;
		cout<<"Imaginary part is "<<imag;
	}
};
void main()
{
complex c;
clrscr();
c.input(3,4);
c.display();
getch();
}