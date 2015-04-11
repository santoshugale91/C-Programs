#include<stdio.h>
int main()
{
  int i=1,n,j;
  scanf("%d",&n);
  while(i<=n)
  {
   for(j=1;j<=i;j++)
   {
    printf("0");
   }
   if(i!=n)
   printf("\n");
   i++;
  }
}
