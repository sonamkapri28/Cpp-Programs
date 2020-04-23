#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[10],temp;
int i,j;
clrscr();
cout <<"Enter a string ";
cin.getline(ch,10);
j=strlen(ch)-1;
for(i=0;i<j;i++,j--)
{
	temp=ch[i];
	ch[i]=ch[j];
	ch[j]=temp;
}
cout <<"Reverse of string is "<<ch;
getch();
}
