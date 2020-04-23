#include<iostream.h>
#include<conio.h>
class stu
{
	int rno;
	char nm[10];
	public: void get()
		{
			cout<<"Enter roll no : ";
			cin>>rno;
			cout<<"Enter name : ";
			cin>>nm;
		}
		void dis()
		{
			cout<<"Roll no : "<<rno<<endl;
			cout<<"Name : "<<nm<<endl<<endl;
		}
};
void main()
{
	int n,i;
	clrscr();
	cout<<"Enter no of student : ";
	cin>>n;
	stu *p = new stu[n];
	for(i=0;i<n;i++)
	{
		p[i].get();
	}
	for(i=0;i<n;i++)
	{
		p[i].dis();
	}
	getch();
}