#include<stdio.h>
void main()
{

    FILE *fp;
    char fname[100],ch[100];
    printf("\nEnter the file Name\t");
    gets(fname);
    fp=fopen(fname,"w");
    if(fp==NULL)
    {
        printf("\nError");
    }
    printf("\nfile open enter the data\n\n");
    while(ch!="exit")
    {
        gets(ch);
        fputs(ch,fp);
    }
    fclose(fp);


}
