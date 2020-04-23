#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[10];
int i;
clrscr();
cout <<"Enter a string ";
cin.getline(ch,10);
for(i=0;i<=strlen(ch);i++)
{
	if(ch[i]>='A' && ch[i]<='Z')
	{
		ch[i]=ch[i]+32;
	}
}
cout <<ch;
getch();
}
