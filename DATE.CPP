#include<iostream.h>
#include<conio.h>
class date
{
	int myr;
	int eyr;
	public : void get()
		{
			cin>>myr;
			cin>>eyr;
		}
		/*void display()
		{
			cout<<myr<<endl;
			cout<<eyr<<endl;
		}*/
		void cal(date *d1)
		{       int diff;
			myr=*d1.myr;
			eyr=*d1.eyr;
			diff=eyr-myr;
			cout<<diff;
		}
};
void main()
{
date d1;
clrscr();
d1.get();
d1.cal(&d1);
getch();
}