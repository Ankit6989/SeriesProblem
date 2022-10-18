#include<stdio.h>

int main()
{
    int n;
    float sum = 0,i,j;
    printf("enter the limit value: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        j=1/i;
        sum = sum+j;
    }
    printf("The sum of series is: %f",sum);
    return 0;

}
