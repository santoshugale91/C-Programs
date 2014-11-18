#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,i;
   char *rock[10], *name;
   printf("Enter the no of rocks\t");
   scanf("%d", &n);
   for(i=0;i<n;i++)
   {
     printf("\nEnter the rock composition\n");
     name=malloc(10*sizeof(char));
     scanf("%s", name);
     rock[i]=name;
   }
   printf("%d", strlen(rock[0]));


    return 0;
}
