#include <stdio.h>
int main() 
{
	int n,a[10],i;
  clrscr();
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=i)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
