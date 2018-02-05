#include<stdio.h>
int main()
{
int hr,mi,ho,mn,sub,su;
scanf("%d%d",&hr,&mi);
scanf("%d%d",&ho,&mn);
sub=hr-ho;
su=mi-mn;
printf("%d%d",sub,su);
return 0;
}
