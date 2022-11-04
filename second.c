#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int numbers, target, out = 0;
    scanf("%d", &numbers);
    scanf("%d", &target);
    for (int x = 0; x < numbers; x++)
    {
        int current;
        scanf("%d", &current);
        if (current < target)
        {
            out++;
        }
    }
    printf("%d", out);
    return 0;
}