#include<stdio.h>

int main()
         {
             int i,n,sum;
             printf("enter the number for the sum: ");
             scanf("%d",&n);
             sum = n*(n+1)/2;
             for(i=1;i<=n;i++)
             {
                 if(i!=n)
                    printf("%d+",i);
                 else
                    printf("%d=%d",i,sum);
             }
             return 0;
         }

OR


/*#include<stdio.h>

int main()
{
    int i,N,sum;


    printf("Enter the value of N: ");
    scanf("%d",&N);


    sum=0;


    for(i=1;i<=N;i++)
        sum= sum+ i;



    printf("Sum of the series is: %d\n",sum);

    return 0;
}
*/
