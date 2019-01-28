#include<stdio.h>
void main()
{
int n,d,m,t,i,sum=0;
scanf("%d%d%d",&n,&d,&m);
for(i=1;i<m;i++)
{
t=n+(m-1)*d;
sum=sum+t;
}
printf("%d",sum);
}
