#include<iostream.h>
#include<conio.h>
class matrix
{
	int a[2][2];
	public: void get()
		{
			int i,j;
			cout<<"Enter matrix"<<endl<<endl;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cin>>a[i][j];
				}
			}
		}
		void show()
		{
			int i,j;
			cout<<"Matrix"<<endl<<endl;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout<<a[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
		matrix operator + (matrix b)
		{
			int i,j;
			matrix sum;
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					sum.a[i][j]=a[i][j]+b.a[i][j];
				}
			}
			return sum;
		}
};
void main()
{
	matrix m1,m2,m3;
	clrscr();
	m1.get();
	m1.show();
	m2.get();
	m2.show();
	m3=m1+m2;
	m3.show();
	getch();
}