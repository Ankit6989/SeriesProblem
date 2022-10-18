#include<stdio.h> //1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N

int main()
{
    int n;
    float sum = 0, n1, n2;
    printf("enter the limit of series: ");
    scanf("%d",&n);

    for(n2=1;n2<=n;n2++)
    {
         n1=1/n2;
      sum = sum +n1;
    }
    printf("The sum of series is = %f",sum);
    return 0;
}
