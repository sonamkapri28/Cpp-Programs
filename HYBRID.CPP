#include<iostream.h>
#include<conio.h>
class student
{
	int rno;
	protected : char nm[10];
	public : int age;
		void get()
		{
			cout<<"Enter student roll no ";
			cin>>rno;
		}
		void show()
		{
			cout<<"Roll no : "<<rno<<endl;
		}
};
class test : public student
{
	char tea[10];
	protected : int m[3];
			void input()
			{
				get();
				cout<<"Enter student name ";
				cin>>nm;
				cout<<"Enter student age ";
				cin>>age;
				cout<<"Enter teacher name ";
				cin>>tea;
			}
				void display()
			{
				show();
				cout<<"Student name : "<<nm<<endl;
				cout<<"Student age : "<<age<<endl;
				cout<<"Teacher name : "<<tea<<endl;
			}
};
class sport
{
	char snm[10];
	protected:int spm[3];
	public : void ip()
		{
			cout<<"Enter sport name ";
			cin>>snm;
		}
		void disp()
		{
			cout<<"Sport name : "<<snm<<endl;
		}
};
class result : public test , public sport
{
	int sum;
	public : void take()
		{
			sum=0;
			int o=0,s=0;
			input();
			ip();
			cout<<"Enter marks in 3 subject ";
			for(int i=0;i<3;i++)
				{
					//o=0;
					cin>>m[i];
					o=o+m[i];
				}
			cout<<"Enter sports marks ";
			for(int j=0;j<3;j++)
			{
				//s=0;
				cin>>spm[j];
				s=s+spm[j];
			}
			sum=o+s;
		}
		void give()
		{
			display();
			disp();
			cout<<"Marks in 5 subject : ";
				for(int i=0;i<3;i++)
				{
					cout<<m[i]<<"\t";
				}
			cout<<endl<<"Sports marks : ";
			for(int j=0;j<3;j++)
			{
				cout<<spm[j]<<"\t";
			}
			cout<<endl;
			cout<<"Total marks : "<<sum<<endl<<endl;
		}
};
void main()
{
	result r[5];
	clrscr();
	for(int i=0;i<5;i++)
	{
		r[i].take();
	}
	for(int j=0;j<5;j++)
	{
		r[j].give();
	}
	getch();
}

