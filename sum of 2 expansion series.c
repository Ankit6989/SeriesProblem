#include<stdio.h> //1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms

int main()
{
    int i, n, count;
    float sum = 0;
    printf("enter the value of N: ");
    scanf("%d",&n);

    count =1;
    for(i=1;i<=n;i++)
    {
       sum = sum +  ( (float)(pow(count,2)) / (float)(pow(count,3)) );
        count+=2;
    }
    printf("the sum of series is: %f",sum);
    return 0;
}


