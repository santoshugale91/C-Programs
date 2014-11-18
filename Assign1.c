#include<stdio.h>
int main()
{

    int a, b, c, max, num1,num2;
    printf("\n Enter the three (a, b, c) numbers\n");
    scanf("%d %d %d", &a, &b, &c) ;

    if(a>b && a>c)
    {
        max=a;
        num1=b;
        num2=c;
    }
    if(b>a && b>c)
    {
        max=b;
        num1=a;
        num2=c;
    }
    else
    {
        max=c;
        num1=a;
        num2=b;

    }
    if((max*max)==(num1*num1)+(num2*num2))
        printf("\nYes");
    else
        printf("\nNO\n");
}
