#include<stdio.h>

int main()
{
    int n,i,sum = 0;
    printf("enter the number for the sum of cube: ");
    scanf("%d",&n);

    sum=pow(((n * (n + 1) ) / 2),2); //iska matlab (base case, power case ); ORGINAL FORMULA: n^2(n+1)^2/4
    for(i=1;i<=n;i++)
    {
        if(i!=n)
        {
            printf("%d^3 + ",i);
        }
            else
            {
            printf("%d^3=%d",i,sum);
            }

    }
    return 0;
}
