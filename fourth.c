#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int students, largest;
    scanf("%d", &students);
    int arr[students];
    for (int x = 0; x < students; x++)
    {
        scanf("%d", &arr[x]);
        if (x == 0)
        {
            largest = arr[x];
        }
        if (x != 0 && arr[x] > largest)
        {
            largest = arr[x];
        }
    }
    for (int x = 0; x < students; x++)
    {
        printf("%d ", (largest - arr[x]));
    }
    return 0;
}
