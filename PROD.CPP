#include<stdio.h>
#include<conio.h>
main()
{
int n,i,rem,product=1;
clrscr();
printf("Enter the number \n");
scanf("%d ",&n);
for (i=1;i<=n;i++)
{
 rem=i%10;
 product=product*rem;
 i=i/10;
}
printf("Product of digits is %d ",product);
getch();
}