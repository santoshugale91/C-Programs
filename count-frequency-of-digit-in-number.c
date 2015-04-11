#include<stdio.h>
void main()
{
    int n, count, num,number,rem,num1;
    printf("\n Enter the number\t");
    scanf("%d",&n);
    num=n;
 printf("\n number is %d",n);
    while(num!=0)
    {
        num1=num%10;
        number=n;
        count=0;
        while(number!=0)
        {
            rem=number%10;
            if(rem==num1)
            {
                count++;
            }
            number=number/10;
        }
        printf("\n digit %d and frequency is %d",num1,count);
        num=num/10;
    }
}
