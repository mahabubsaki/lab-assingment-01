#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int testcase;
    scanf("%d", &testcase);
    for (int x = 0; x < testcase; x++)
    {
        long long int number, divisible = 0;
        scanf("%lld", &number);
        if (number > 1)
        {
            for (long long int x = 2; x < number; x++)
            {
                if (number % x == 0)
                {
                    divisible++;
                    break;
                }
            }
        }
        else
        {
            divisible++;
        }
        if (divisible)
        {
            printf("No");
            printf("\n");
        }
        else
        {
            printf("Yes");
            printf("\n");
        }
    }
    return 0;
}
