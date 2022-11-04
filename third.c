#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int size;
    scanf("%d", &size);
    for (int x = 1; x <= size; x++)
    {
        for (int y = x; y >= 1; y--)
        {
            printf("%d ", y);
        }
        printf("\n");
    }
    return 0;
}
