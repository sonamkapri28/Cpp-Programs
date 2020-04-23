#include<iostream.h>
#include<conio.h>
class demo
{
	int data;
	static int count;
	demo()
	{
		cout<<"Enter data : ";
		cin>>data;
	}
	public :  void show()
		{
			cout<<"Data : "<<data<<endl;
		}
	       static	demo *get()
		{
			if(count==0)
			{
				demo *p=new demo;
				count++;
				return p;
			}
			else
			{
				return (NULL);
			}
		}
}   ;
int demo :: count;
void main()
{
	clrscr();
	demo *ptr;
	ptr=demo :: get();
	if(ptr!=NULL)
	{
		ptr->show();
	}
	else
	{
		cout<<"No more object can be created";
	}
	demo *ptr1=demo :: get();
	if(ptr1!=NULL)
	{
		ptr1->show();
	}
	else
	{
		cout<<"no more object ";
	}
	getch();
}