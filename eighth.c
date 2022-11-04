#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    long long int permutation, uniqu = 0;
    scanf("%lld", &permutation);
    for (long long int i = 0; i < permutation; i++)
    {
        for (long long int j = i + 1; j < permutation; j++)
        {
            uniqu++;
        }
    }
    printf("%lld", uniqu);
}
