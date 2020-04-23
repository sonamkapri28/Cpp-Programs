#include<iostream.h>
#include<conio.h>
int search(int [],int);
int main()
{
	clrscr();
	int ar[]={1,2,3,4,5,6,8};
	int size=sizeof(ar)/sizeof(ar[0]);
	cout<<"Missing element : "<<search(ar,size);
	getch();
}
int search(int ar[],int size)
{
	int a=0,b=size-1,mid;
	while((b-a)>1)
	{
		mid=(a+b)/2;
		if((ar[a]-a) != (ar[mid]-mid))
		{
			b=mid;
		}
		else if((ar[b]-b) != (ar[mid]-mid))
		{
			a=mid;
		}
	}
	return (ar[mid]+1);
}