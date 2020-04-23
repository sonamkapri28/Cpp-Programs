#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,pos,value;
clrscr();
cout <<"Enter array limit ";
cin >>n;
cout <<"Enter array elements : ";
for(i=0;i<n;i++)
{
	cin >>a[i];
}
cout <<"Enter the position at which you want to insert the value in an array ";
cin >>pos;
cout <<"Enter the value you want to insert in an array ";
cin >>value;
for(i=n-1;i>=pos;i--)
{
	a[i+1]=a[i];
}
a[pos]=value;
n++;
cout <<"New inserted array: ";
for(i=0;i<n;i++)
{
	cout <<a[i]<<"\t";
}
getch();
}


