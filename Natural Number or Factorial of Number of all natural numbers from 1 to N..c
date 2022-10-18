#include<stdio.h>

int main()
{
    int n = 1, count, limit;
    float sum = 0, fact;

    printf("Enter the number of terms\n");
    scanf("%d", &limit);

    while(n <= limit)
    {
        fact = 1;
        for(count = 1; count <= n; count++)
        {
            fact = fact * count;
        }

        sum = sum + (n / fact);

        n++;
    }

    printf("Sum of %d terms of series is %f\n", limit, sum);

    return 0;
}
