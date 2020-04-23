#include<stdio.h>
#include<conio.h>
#define max 20
void pushA();
void pushB();
void popA();
void popB();
void disA();
void disB();
int stack[max];
int top1=-1;
int top2=max-1;
	void pushA()
	{       int n;
		printf("Enter the number ");
		scanf("%d",&n);
		if(top1<(top2-1))
		{
			top1++;
			stack[top1]=n;
		}
		else
		{
			printf("Stack Overflow");
		}
	}
	void pushB()
	{       int n;
		printf("Enter the number ");
		scanf("%d",&n);
		if(top1<(top2-1))
		{
			top2--;
			stack[top2]=n;
		}
		else
		{
			printf("Stack Overflow");
		}
	}
	void popA()
	{
		if(top1>=0)
		{
			int n=stack[top1];
			top1--;
			printf("Popped element : %d",n);
		}
		else
		{
			printf("Stack Underflow");
		}
	}
	void popB()
	{       int n;
		if(top2<=n)
		{
			n=stack[top2];
			top2++;
			printf("Popped element : %d",n);
		}
		else
		{
			printf("Stack Underflow");
		}
	}
	void disA()
	{
		int i;
		for(i=top1;i>=0;i--)
		{
			printf("%d\t",stack[i]);
		}
		printf("\n");
	}
	void disB()
	{
		int i;
		for(i=top2;i<max-1;i++)
		{
			printf("%d\t",stack[i]);
		}
		printf("\n");
	}
void main()
{
	int choice;
	char c;
	clrscr();
do
{
	printf("1.Push from front \n2.Push from end \n3.Pop from front \n4.Pop from end \n5.Display stack A \n6.Display stack B \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:pushA();
			break;
		case 2:pushB();
			break;
		case 3:popA();
			break;
		case 4:popB();
			break;
		case 5:disA();
			break;
		case 6:disB();
			break;
		default:printf("Invalid choice");
			break;
	}
	printf("Do u want to continue [y/n] : ");
	fflush(stdin);
	scanf("%c",&c);
}while(c=='y');
getch();
}