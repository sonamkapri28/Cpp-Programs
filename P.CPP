#include<iostream.h>
#include<conio.h>
#include<math.h>
class p
{
	int no;
	int power;
	int ans;
	public: p(int=1,int=2);
		void show()
		{
			cout<<"Answer is "<<ans<<endl;
		}
};
p :: p(int n,int k)
{
	no=n;
	power=k;
	ans=pow(no,power);
}
void main()
{
clrscr();
p p1(6),p2(2,3);
p1.show();
p2.show();
getch();
}