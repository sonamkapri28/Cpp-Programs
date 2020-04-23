#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,max;
clrscr();
cout <<"Enter array limit ";
cin >>n;
cout <<"Enter array elements : ";
for(i=0;i<n;i++)
{
	cin >>a[i];
}
max=a[0];
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(a[i]>a[j] && a[i]!=a[j] && a[i]>max)
		{
			max=a[i];
		}
	}
}
cout <<"Largest element in array is "<<max;
getch();
}

