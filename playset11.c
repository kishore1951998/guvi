#include <stdio.h>

int main()
{
  char a[10],b[10];
  int i,j,c=0,k=0;
  scanf("%s",&a[i]);
  c=0;
  for(i=0;a[i]!='\0';i++)
  {
      c++;
  }
  k=0;
  for(j=c-1;j>=0;j--)
{  
b[k]=a[j];
 printf("%c",b[k]);
 k++;
 }
 return 0;
}

