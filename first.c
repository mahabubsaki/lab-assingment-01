#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        long long int sum;
        scanf("%lld", &sum);
        for (int x = 0; x < 3; x++)
        {
            long long int current;
            scanf("%lld", &current);
            sum = sum - current;
        }
        printf("%lld", sum);
        printf("\n");
    }
    return 0;
}
