#include<stdio.h>
int main()
{

    int n=0,m1,m2,i;
    for(i=0;;i++)
    {
      scanf("%d",&n);
      if(n==-1)
      {
          printf("%d",m2);
          break;
      }

      else
      {
       if(i==0)
        {
          m1=m2=n;
        }
       else
       {
          if(m1<n)
          {
              m2=m1;
              m1=n;
          }
          else if(m2<n)
            {
                 m2=n;
            }

       }

      }
    }
}
