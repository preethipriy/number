#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,d,i;
clrscr();
scanf("%d%d%d",&n,&a,&d);
for(i=a;i<=n;i++)
{
d=d*i;
}
printf("%d",d);
getch();
}
