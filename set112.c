#include <stdio.h>
int main()
{
	int n,flag=0,i,m;
  printf("Enter value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((n/i==2) && (n%i==0))
		{
			printf("%d",i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d",n);
	}
	return 0;
}
