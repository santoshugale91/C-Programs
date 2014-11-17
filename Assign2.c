#include<stdio.h>
int main()
{

    int n,sum=0,i;
    printf("Enter Number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=(i*i*i*i)+sum;
    }
    printf("sum = %d", sum);
}

