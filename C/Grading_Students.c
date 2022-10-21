// Grading Students

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        int grade;
        scanf("%d", &grade);
        if (grade < 38)
        {
            printf("%d\n", grade);
        }
        else if (5 - (grade % 5) < 3)
        {
            printf("%d\n", 5 * (grade / 5 + 1));
        }
        else
        {
            printf("%d\n", grade);
        }
    }
    return 0;
}
