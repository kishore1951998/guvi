#include <stdio.h>
int main(void)
{
	int n;
  printf("n value :");
	scanf("%d",&n);
	int p=1;
	while(p<n)
	{
		p<<=1;
	}
	printf("%d",p);
	return 0;
}
