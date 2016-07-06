#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,count=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}}
if(count==2)
printf("the number is a prime");
else
printf("it is not a prime no.");
getch();
}
