#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	int a[5],b[5],i;
	cout<<"Enter the array : ";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	ofstream out;
	out.open("f1.txt",ios::out);
	out.write((char *)&a,sizeof(a));
	out.close();

	ifstream in;
	in.open("f1.txt",ios::in);
	in.read((char *)&b,sizeof(b));
	cout<<"Array : ";
	for(i=0;i<5;i++)
	{
		cout<<b[i]<<"\t";
	}
	getch();
}