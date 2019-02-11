#include <stdio.h>
int main()
{
	int n,flag=0,i;
  clrscr();
	scanf("%d",&n);
	if(n%2!=0 && n>3)
	{
		for(i=3;i<n;i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("composite number");
	}
	else
	printf("not a composite number");
	return 0;
}
