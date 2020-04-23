#include<iostream.h>
#include<conio.h>
template<class x>
void linear(x a[],int n)
{
	x value;
	cout<<"Enter the value that u want to search ";
	cin>>value;
	for(int i=0;i<n;i++)
	{
		if(a[i]==value)
		{
			cout<<"Element found at position "<<i+1<<endl;
		}
	}
}
template <class x>
void binary(x a[],int n)
{
	x value;
	cout<<"Enter the element which you want to search ";
	cin>>value;
	x low=0;
	x high=n-1;
	int mid=(low+high)/2;
		while(low<=high)
		{
			if(a[mid]<value)
			{
				low=mid+1;
			}
			else if(a[mid]==value)
			{
				cout<<"Element found at position "<<mid+1<<endl;
				break;
			}
			else
			{
				high=mid-1;
			}
			mid=(low+high)/2;
		}
}
void main()
{
	clrscr();
	int a[10],n,i,choice;
	float f[10];
	char ch;
	do
	{
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
	cout<<"1.Linear search \n2.Binary search \n3.Binary search with recursion \n";
	cout<<"Enter choice ";
	cin>>choice;
	switch(choice)
	{
		case 1:linear(a,n);
			linear(f,n);
			break;
		case 2:binary(a,n);
			binary(f,n);
			break;
		/*case 3:rbinary();
			break;  */
		default:cout<<"Invalid choice";
			break;
	}
	cout<<"Do u want to continue ";
	cin>>ch;
	}while(ch=='y');
	getch();
}
