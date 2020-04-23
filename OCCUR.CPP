#include<iostream.h>
#include<conio.h>
void main()
{
	int a[5];

	int count,n,i;
	clrscr();
	cout<<"Enter array : ";
	for( i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for( i=0;i<5;i++)
	{
		int c=0;
		for(int j=0;j<5;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		if(c%2 != 0)
			 count = a[i];
	}
	cout<<count;
	getch();
}