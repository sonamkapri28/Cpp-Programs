#include<iostream.h>
#include<conio.h>
class person
{
	protected:int age;
		 char gender;
};
class emp : public person
{
	protected:int eid;
		 char ename[10];
};
class manager : public emp
{
	public : int sal;
		void get()
		{
			cout<<"Enter age ";
			cin>>age;
			cout<<"Enter gender ";
			cin>>gender;
			cout<<"Enter employee id ";
			cin>>eid;
			cout<<"Enter employee name ";
			cin>>ename;
			cout<<"Enter salary ";
			cin>>sal;
		}
		void show()
		{
			cout<<"Age : "<<age<<endl;
			cout<<"Gender : "<<gender<<endl;
			cout<<"Employee id : "<<eid<<endl;
			cout<<"Employee name : "<<ename<<endl;
			cout<<"Salary : "<<sal<<endl;
		}
};
void main()
{
	manager m[3];
	int choice;
	char ch;
	clrscr();
	do
	{
		cout<<"1.Insert record \n2.Display record \n3.Display  highest salary \n";
		cout<<"Enter your choice => ";
		cin>>choice;
		switch(choice)
		{
			case 1:for(int i=0;i<3;i++)
				{
					m[i].get();
				}
				break;
			case 2:for(int j=0;j<3;j++)
				{
					m[j].show();
				}
				break;
			case 3:int max=m[0].sal;
				for(int k=0;k<3;k++)
				{
					if(max > m[k].sal)
					{
						max=m[k].sal;
					}
				 }
				cout<<"Highest salary : "<<max<<endl;
				break;
			default:cout<<"Invalid choice";
				break;
		}
	cout<<"Do u want to continue (y/n) ";
	cin>>ch;
	}
	while(ch=='y');
	getch();
}
