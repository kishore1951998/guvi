#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int volume,tsa;
	volume=a*b*c;
	tsa=2*((a*b)+(b*c)+(c*a));
	printf("%d %d",tsa,volume);
	return 0;
}
