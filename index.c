#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[10];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d%d\n",a[i],i);
}
getch();
}
