#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int students, lastGirl;
    scanf("%d", &students);
    int arr[students];
    for (int x = 0; x < students; x++)
    {
        scanf("%d", &arr[x]);
    }
    scanf("%d", &lastGirl);
    for (int x = lastGirl; x < students; x++)
    {
        printf("%d ", arr[x]);
    }
    for (int x = 0; x < lastGirl; x++)
    {
        printf("%d ", arr[x]);
    }
    return 0;
}
