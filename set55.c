#nclude<stdio.h>
void main()
{
int n,c=0,n1;
while(n>0)
{
n1=n%10;
c++;
n=n/10;
}
printf("%d",c);
}
