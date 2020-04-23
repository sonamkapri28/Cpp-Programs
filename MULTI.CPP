#include<iostream.h>
#include<conio.h>
class student
{
	int rno;
	protected : char nm[10];
	public : int age;
		void input()
		{
			cout<<"Enter roll no ";
			cin>>rno;
		}
		void display()
		{
			cout<<"Roll no  : "<<rno<<endl;
		}
};
class test : public student
{
	protected : int m[3];
	public : void get()
		{
			int i;
			input();
			cout<<"Enter name ";
			cin>>nm;
			cout<<"Enter age ";
			cin>>age;
			cout<<"enter marks in 3 subjects ";
			for(i=0;i<3;i++)
			{
				cin>>m[i];
			}
		}
		void show()
		{
			int i;
			display();
			cout<<"Name : "<<nm<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Marks in 3 subjects : ";
			for(i=0;i<3;i++)
			{
				cout<<m[i]<<endl;
			}
		}
};
class result : public test
{
	int sum;
	public : void ip()
		{
			int i;
			get();
			sum=0;
			for(i=0;i<3;i++)
			{
				sum=sum+m[i];
			}
			show();
			cout<<"Total marks : "<<sum<<endl;
		}
};
void main()
{
	result r;
	clrscr();
	r.ip();
	getch();
}