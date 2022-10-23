// Cats and a Mouse

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        int a = abs(x - z);
        int b = abs(y - z);
        if (a < b)
            printf("Cat A\n");
        else if (b < a)
            printf("Cat B\n");
        else
            printf("Mouse C\n");
    }
    return 0;
}
