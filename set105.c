#include <stdio.h>
#include<math.h>
int main()
{
	float p,r,si;
	int n,result;
  clrscr();
	scanf("%f%d%f",&p,&n,&r);
	si=((p*n*r)/100);
	printf("%d",si);
	return 0;
}
