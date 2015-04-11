#include <stdlib.h>
void fun(int **b, int n)
{
     int i,j;
    for(i = 0; i < n; i++)
    {
		for(j=0;j<n;j++)
        {
            *(*(b+i)+j)  =  *(*(b+i)+j) + 5;
        }

    }

}
int main()
{
    int **array;
    int n=2,i,j, x;
	array = malloc(n * sizeof(int *));
	printf("\n Enter matrix \n");
	if(array == NULL)
		{
		 printf( "out of memory\n");
		return 0;
		}
	for(i = 0; i < n; i++)
    {
		array[i] = malloc(n * sizeof(int));

		for(j=0;j<n;j++)
        {
            scanf("%d", &x);
            *(* (array+i)+j)=x;
        }
    }

    for(i = 0; i < n; i++)
    {
		for(j=0;j<n;j++)
        {
            printf("%d", *(*(array+i)+j));
        }
        printf("\n");
    }

    fun(array, 5);
    printf("\n\n");
    for(i = 0; i < n; i++)
    {
		for(j=0;j<n;j++)
        {
            printf("%d", *(*(array+i)+j));
        }
        printf("\n");
    }

}
