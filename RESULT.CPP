#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

class student
{
	int rno;
	char nm[20];
	int age;
	public:void get()
		{
			cout<<"Enter roll no ";
			cin>>rno;
			cout<<"Enter name ";
			cin.ignore();
			cin.getline(nm,20);
			cout<<"Enter age ";
			cin>>age;
		}
		void show()
		{
			cout<<"Roll no : "<<rno<<endl;
			cout<<"Name : "<<nm<<endl;
			cout<<"Age : "<<age<<endl;
		}
		void menu();
		void insert()
		{
			get();
			ofstream out;
			out.open("x.txt",ios::app|ios::binary);
			out.write((char *)this,sizeof(*this));
			out.close();
		}
		void view()
		{
			ifstream in;
			in.open("x.txt",ios::in|ios::binary);
			while(!in.eof())
			{
				in.read((char *)this,sizeof(*this));
				show();
			}
			in.close();
		}
	       /*	void search(char *t)
		{
			ifstream in;
			in.open("r.txt",ios::in);
			in.read((char *)this,sizeof(*this));
			while(!in.eof())
			{
				if(strcmp(t,nm)==0)
				{
					show();
					break;
				}
				in.read((char *)this,sizeof(*this));
				in.close();
			}
		}
		void deletee(char *t)
		{
			ifstream in;
			in.open("r.txt",ios::in);
			in.read((char *)this,sizeof(*this));
			while(!in.eof())
			{
				if(strcmp(t,nm)!=0)
				{
					ofstream out;
					out.open("r.txt",ios::app|ios::binary);
					out.write((char *)this,sizeof(*this));
					out.close();
				}
				in.read((char *)this,sizeof(*this));
				in.close();
				remove("r.txt");
				rename("e.txt");
			}
		}
		void update(char *t)
		{
			fstream in;
			in.open("r.txt",ios::in|ios::out|ios::binary|ios::ate);
			in.read((char *)this,sizeof(*this));
			while(strcmp(t,nm)==0)
			{
				get();
				in.seekp(in.tellp()-sizeof(*this));
				in.write((char *)this,sizeof(*this));
			}
		}*/
};
void student::menu()
{
	int choice;
	char ch[20],c;
	do
	{
		cout<<"1.Insert \n2.View \n3.Delete \n4.Update \n5.Search \n6.Exit"<<endl;
		cout<<"Enter the choice ";
		cin>>choice;
		switch(choice)
		{
			case 1:insert();
				break;
			case 2:view();
				break;
		   /*	case 3:cout<<"Enter name to delete ";
				cin.getline(ch,20);
				deletee(ch);
				break;
			case 4:cout<<"Enter name to update ";
				cin.getline(ch,20);
				update(ch);
				break;
			case 5:cout<<"Enter name to search ";
				cin.getline(ch,20);
				search(ch);
				break; */
			default:cout<<"Invalid choice";
				break;
		}
		cout<<"Do u want to continue [y/n] ";
		cin>>c;
	}while(c=='y');
}
void main()
{
	clrscr();
	student s;
	s.menu();
	getch();
}