#include<iostream.h>
#include<conio.h>
class student
{
	    public:	int rno,sum,per;
			char nm[10];
			int m[5];
		void input();
		void display();
};
//int i,sum;
//float per;
void student :: input()
{       int i;
	cout<<"Enter roll no ";
	cin>>rno;
	cout<<"Enter name ";
	cin>>nm;
	cout<<"Enter marks in 5 subjects : ";
	for(i=0;i<5;i++)
	{
		cin>>m[i];
	}
}
void student :: display()
{
	int i;
	sum=0;

	cout<<"Roll no : "<<rno<<endl;
	cout<<"Name is : "<<nm<<endl;
	cout<<"Marks are : ";
	for(i=0;i<5;i++)
	{
		cout<<m[i]<<"\t";
	}
	for(i=0;i<5;i++)
	{
		sum=sum+m[i];
	}
	per=sum/5;
	cout<<endl<<"Total Marks is : "<<sum<<endl;
	cout<<"Percentage is : "<<per<<endl<<endl;
}
void main()
{
student s[5];
int i;
clrscr();
for(i=0;i<5;i++)
{
	s[i].input();
}
for(i=0;i<5;i++)
{
	s[i].display();
}

getch();
}
