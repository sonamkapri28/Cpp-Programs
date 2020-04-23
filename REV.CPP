#include<iostream.h>
#include<conio.h>
void main()
{
	int i,a[5];
	clrscr();
	cout<<"Enter array :";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int first=a[0],second=a[0], min=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i] < first)
		{
			first=a[i];
		}
	}
	cout<<"Smallest number : "<<first<<endl;
	for(i=0;i<5;i++)
	{
		if(a[i] < min)
		{
			second=min;
			min=a[i];
		}
		else if(a[i] < second && a[i] > min)
		{
			second=a[i];
		}
	}
	cout<<"Second Smallest number : "<<second;
	getch();
}