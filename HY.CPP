#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int rno;
	char nm[10];
	public : student(int r,char n[])
		{
			rno=r;
			strcpy(nm,n);
			cout<<"Roll no. : "<<rno<<endl;
			cout<<"Name : "<<nm<<endl;
		}
};
class teacher : public student
{
	protected: int marks[3];
	public : teacher(int m[]) : student(1,"sonam")
		{
			int i;
			for(i=0;i<3;i++)
			{
				marks[i]=m[i];
			}
			cout<<"Marks in 3 subjects : ";
			for(i=0;i<3;i++)
			{
				cout<<marks[i]<<"\t";
			}
			cout<<endl;
		}
};
class sports
{
	protected:int smarks[3];
	public : void get()
		{
			int i;
			cout<<"Enter marks in 3 subject ";
			for(i=0;i<3;i++)
			{
				cin>>smarks[i];
			}
		}
		void show()
		{
			int i;
			cout<<"Marks in 3 subject : ";
			for(i=0;i<3;i++)
			{
				cout<<smarks[i]<<"\t";
			}
			cout<<endl;
		}
};
class result : public teacher , public sports
{
	int sum;
	public: result(int r[]) : teacher( r)
		{
			int i,j,s=0,o=0;
			get();
			for(i=0;i<3;i++)
			{
				s=s+marks[i];
				cout<<s<<endl;
			}
			for(j=0;j<3;j++)
			{
				o=o+smarks[j];
				cout<<o<<endl;
			}
			show();
			sum=0;
			sum=s+o;
			cout<<"Total marks "<<sum<<endl;
		}

};
void main()
{
	clrscr();
	int a[]={10,20,30};
	result r(a);
	getch();
}