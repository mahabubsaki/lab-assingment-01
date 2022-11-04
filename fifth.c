#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int x = 1; x <= testcase; x++)
    {
        int percantage, minutes = 0;
        scanf("%d%%", &percantage);
        if (percantage < 60)
        {
            minutes = minutes + (60 - percantage) + 100;
        }
        else if (percantage < 80)
        {
            minutes = minutes + ((80 - percantage) * 2) + 60;
        }
        else if (percantage < 100)
        {
            minutes = minutes + ((100 - percantage) * 3);
        }
        printf("%d minutes", minutes);
        printf("\n");
    }
    return 0;
}
