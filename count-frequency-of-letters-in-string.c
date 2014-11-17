#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100], ch,ch1;
    int n, max=0;
    printf("\nEnter the first string\t");
    gets(str1);
    n=strlen(str1);
    printf("\nstring is %s and length is %d",str1,n);
    int i,j;
    for(i=0;str1[i]!='\0';i++)
    {
        ch=str1[i];
        int count=0;
        for(j=0;str1[j]!='\0';j++)
        {
            if(ch==str1[j])
            {
                count++;
            }
        }
        if(max<count)
        {
            max=count;
            ch1=ch;

        }
        printf("\nfrequency of %c is %d",ch,count);
    }
  printf("\n\nmaximum frequency character is %c with frequency of  %d\n\n",ch1,max);
}
