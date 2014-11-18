#include<stdio.h>
#include<malloc.h>
int main()
{

    char *name[10], *m;
    m=malloc(sizeof(char)*10);
    scanf("%s",m);
    name[0]=m;
    printf("%s",name[0]);
}
