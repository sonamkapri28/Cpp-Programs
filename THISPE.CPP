#include<iostream.h>
#include<conio.h>
class person
{
	char nm[10];
	int age;
	public : void set()
		{
			cout<<"Enter name ";
			cin>>nm;
			cout<<"Enter age ";
			cin>>age;
		}
		void show()
		{
			cout<<"Name : "<<nm<<endl;
			cout<<"Age : "<<age<<endl;
		}
		person disp(person o)
		{
			if(this->age > o.age)
				return *this;
			else
				return o;
		}
};
void main()
{
	clrscr();
	person ob1,ob2,ob3;
	ob1.set();
	ob1.show();
	ob2.set();
	ob2.show();
	ob3=ob1.disp(ob2);
	cout<<endl<<"Elder person "<<endl;
	ob3.show();
	getch();
}