#include<iostream.h>
#include<conio.h>
int missingnumber(int arr1[],int arr2[],int n)
{
	int i,j,temp=0;
	for(i=0;i<5;i++)
		temp=temp^arr1[i];
		for(i=0;i<4;i++)
			temp=temp^arr2[i];
			return temp;
}
void main()
{
	clrscr();
	int arr1[]={1,2,3,4,5};
	int arr2[]={1,2,3,5};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	cout<<"Missing number = "<<missingnumber(arr1,arr2,n);
	getch();
}