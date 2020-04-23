#include<iostream.h>
#include<conio.h>
class car
{
	protected : int model,price;
};
class alto : public car
{
	char color[10];
	public:
		void get()
		{
			cout<<"Enter model ";
			cin>>model;
			cout<<"Enter price ";
			cin>>price;
			cout<<"Enter color ";
			cin>>color;
		}
		void show()
		{
			cout<<"Model : "<<model<<endl;
			cout<<"Price : "<<price<<endl;
			cout<<"Color : "<<color<<endl;
		}
};
class swift : public car
{
	int weight;
	public :
		void input()
		{
			cout<<"Enter model ";
			cin>>model;
			cout<<"Enter price ";
			cin>>price;
			cout<<"Enter weight ";
			cin>>weight;
		}
		void display()
		{
			cout<<"Model : "<<model<<endl;
			cout<<"Price : "<<price<<endl;
			cout<<"Weight : "<<weight<<endl;
		}
};
void main()
{       clrscr();
	alto a;
	a.get();
	a.show();
	swift s;
	s.input();
	s.display();
	getch();
}