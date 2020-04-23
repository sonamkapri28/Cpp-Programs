#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int rno,i;
	char nm[10];
	int age,sum;
	int marks[5];
	public: student()
		{
			cout<<"Enter roll no ";
			cin>>rno;
			cout<<"Enter name ";
			cin>>nm;
			cout<<"Enter age ";
			cin>>age;
			cout<<"Enter marks in 5 subjects : ";
			for(i=0;i<5;i++)
			{
				cin>>marks[i];
			}
		}
		student(int r)
		{
			rno=r;
			cout<<"Enter name ";
			cin>>nm;
			cout<<"Enter age ";
			cin>>age;
			cout<<"Enter marks in 5 subjects : ";
			for(i=0;i<5;i++)
			{
				cin>>marks[i];
			}
		}
		student(int r,char n[])
		{
			rno=r;
			strcpy(nm,n);
			cout<<"Enter age ";
			cin>>age;
			cout<<"Enter marks in 5 subjects : ";
			for(i=0;i<5;i++)
			{
				cin>>marks[i];
			}
		}
		student(int r,char n[],int a)
		{
			rno=r;
			strcpy(nm,n);
			age=a;
			cout<<"Enter marks in 5 subjects : ";
			for(i=0;i<5;i++)
			{
				cin>>marks[i];
			}
		}
		student(int r,char n[],int a,int m[])
		{
			rno=r;
			strcpy(nm,n);
			age=a;
			for(i=0;i<5;i++)
			{
				marks[i]=m[i];
			}
		}
		void show()
		{
			sum=0;
			cout<<"Roll no : "<<rno<<endl;
			cout<<"Name : "<<nm<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Marks are : ";
			for(i=0;i<5;i++)
			{
				cout<<marks[i]<<"\t";
			}
			cout<<endl;
			for(i=0;i<5;i++)
			{
				sum=sum+marks[i];
			}
			cout<<"Sum is : "<<sum<<endl;
		}
};
void main()
{
	int arr[]={10,20,30,40,50};
	clrscr();
	student s;
	s.show();
	student s1(2);
	s1.show();
	student s2(3,"sonam");
	s2.show();
	student s3(4,"parth",15);
	s3.show();
	student s4(5,"jiya",10,arr);
	s4.show();
	getch();
}