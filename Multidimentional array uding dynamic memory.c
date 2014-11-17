#include<stdio.h>
#include<stdlib.h>
void main()
{
    char *name;
    char *names[4];
    int i=0;
    for(i=0;i<4;i++)
        {
            name = (char*)malloc(sizeof(char));
            printf("\n Enter name ");
            scanf("%s",name);
            names[i]=name;
            printf("name is %s",names[i]);
            //free(name);
        }
    for(i=0;i<4;i++)
        {
           //  name = (char*)calloc(sizeof(char),10);
            printf("name is %s",names[i]);
           //   scanf("%s",name);
           //   names[i]=name;
           // free(name);
        }
}

