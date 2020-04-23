#include<iostream.h>
#include<conio.h>
//void push();
//void pop();
//void display();
//int stack[10];
int top=-1;
void main()
{
	int choice,a[10],n,i;
	float f[10];
	char ch;
	clrscr();
	cout<<"Enter array limit ";
	cin>>n;
	cout<<"Enter integer array ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter float array ";
	for(i=0;i<n;i++)
	{
		cin>>f[i];
	}
	do{
		cout<<"\n1.push \n2.pop \n3.display \n4.Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				push(a,n);
				push(f,n);
				break;
			case 2:
				pop(a,n);
				pop(f,n);
				break;
			case 3:
				display();
				break;
		       default:
				cout<<"Invalid choice";
				break;
		}
		cout<<"do u want to continue ";
		cin>>ch;
	}while(ch=='y');
	getch();
}
template <class x>
void push(x a[],int n)
	{
	int value;
		if(top<=(n-1))
		{
			cout<<"Enter the element to be inserted: ";
			cin>>value;
			top++;
			a[top]=value;
		}
		else
		{
			cout<<"Stack Overflow";
		}
	}
template <class x>
void pop(x a[],int n)
	{
	int value;
		if(top<=n-1)
		{
			value=a[top];
			top--;
			cout<<"The poped element is : "<<value;
		}
		else
		{
			cout<<"Stack Underflow";
		}
	}
/*template <class x>
void display(x)
	{
		int i,value;
		cout<<"The stack is : ";
		for(i=0;i<=top;i++)
		{
			cout<<"%d\t",stack[i];
		}
	}  */