// C program to convert time into words.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void timeInWords(int h, int m)
{
    char words[][50] = { "zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine","ten", "eleven", "twelve", "thirteen","fourteen", "fifteen", "sixteen", "seventeen","eighteen", "nineteen", "twenty", "twenty one",
"twenty two", "twenty three", "twenty four","twenty five", "twenty six", "twenty seven","twenty eight", "twenty nine",
    };
 
    if (m == 0)
        printf("%s o' clock\n", words[h]);
 
    else if (m == 1)
        printf("one minute past %s\n", words[h]);
 
    else if (m == 59)
        printf("one minute to %s\n", words[(h % 12) + 1]);
 
    else if (m == 15)
        printf("quarter past %s\n", words[h]);
 
    else if (m == 30)
        printf("half past %s\n", words[h]);
 
    else if (m == 45)
        printf("quarter to %s\n", words[(h % 12) + 1]);
 
    else if (m <= 30)
        printf("%s minutes past %s\n", words[m], words[h]);
 
    else if (m > 30)
        printf("%s minutes to %s\n", words[60 - m],
                                     words[(h % 12) + 1]);
}

int main()
{
    int h;
    scanf("%d",&h);
    int m;
    scanf("%d",&m);
 
    timeInWords(h, m);
    return 0;
}

