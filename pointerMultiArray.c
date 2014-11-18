#include <stdio.h>
 myfuncn( int **b, int n)
{
    int x,y;
    for(x=0; x<n; x++)
    {
        for(y=0;y<n;y++)
        {
                    printf(" %d", b[x][y]);
        }
    }
}

int main()
{
     int a[5][5] = {{11, 22}, {33, 44}};
     int i,j;
     myfuncn(&a, 2);
     /*for(i=0;i<4;i++)
     {

         for(j=0;j<2;j++)
         {

             printf("\n %d", a[i][j]);
         }
     }*/
}
