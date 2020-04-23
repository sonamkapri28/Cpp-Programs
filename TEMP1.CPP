#include<iostream.h>
#include<conio.h>
template <class x>
void sort(x *a,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				x t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	cout<<"Bubble Sorted array : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl<<endl;
}
void main()
{
clrscr();
int arr[10],n,i;
float f[10];
cout<<"Enter array limit ";
cin>>n;
cout<<"Enter integer array ";
for(i=0;i<n;i++)
{
	cin>>arr[i];
}
sort(arr,n);
cout<<"Enter float array ";
for(i=0;i<n;i++)
{
	cin>>f[i];
}
sort(f,n);
getch();
}