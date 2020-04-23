#include<iostream.h>
#include<conio.h>
main()
{
	int n,i;
	clrscr();
	cout<<"Enter no of elements ";
	cin>>n;
	int *p = new int[n];
	cout<<"Enter array : ";
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<"Array : ";
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<"\t";
	}
	getch();
}
