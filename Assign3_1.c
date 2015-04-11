
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{

    int n , i, *p, *q, temp;;
    scanf("%d", &n);
    p=malloc(sizeof(int ));
    for(i=0;i<n;i++)
    {
        scanf("%d", &p[i]);
    }
    q=p;

    for(i=0;i<n;i++)
    {
        printf("\t%d", q[i]);
    }


    temp=q[n];
    q[n]=q[n-1];
    q[n-1]=temp;

    if()
}
