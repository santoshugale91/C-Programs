#include<stdio.h>
void main()
{
    int n, a[100],i,num1,count,rem,max=0,maximum;
    printf("\n Enter the number of element in array\t");
    scanf("%d",&n);
    printf("\n Enter %d elements in array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    while(i<n)
    {
        num1=a[i];
        count=0;
        int j=0;
        while(j<n)
        {
            rem=a[j];
            if(rem==num1)
            {
                count++;
            }
            j++;
        }
        if(max<count)
        {
            max=count;
            maximum=num1;
        }
        printf("\n number %d and frequency is %d",num1,count);
      i++;
    }
   printf("\n \n number %d and maximum frequency is %d",maximum,max);
}
