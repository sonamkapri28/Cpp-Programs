#include<iostream.h>
#include<conio.h>
class c
{
	static int count;
	//static int dcount;
	public: c()
		{
			cout<<"Object created"<<endl;
			cout<<"I am in constructor"<<endl;
			count++;
			cout<<"Object "<<count<<"created"<<endl<<endl;
		}
		~c()
		{
			cout<<"Object is destroyed"<<endl;
			cout<<"I am in destructor"<<endl;
			//count--;
			cout<<"Object "<<count<<"Destroy"<<endl<<endl;
			count--;
			getch();
		}
};
int c::count;
void main()
{
clrscr();
c ob1,ob2;
//cout<<"I am in main"<<endl;
{
	c ob3;
}
getch();
}