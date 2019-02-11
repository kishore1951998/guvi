#include <stdio.h>

int main(void) {
	int n;
  printf("Enter n");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%10==0)
		{
			printf("%d",n);
			break;
		}
		n++;
	}
	return 0;
}
