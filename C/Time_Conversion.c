#include<stdio.h>
void military_std(char inp[])
{
	printf("Time in Military Standard is ");
	int i;
    int h_ones =(int)inp[1]-'0' ;
    int h_tens=(int)inp[0]-'0';
    int fin_hrs=(h_tens*10 + h_ones%10);
    if (inp[8]=='A')
    {
        if (fin_hrs==12)
        {
            printf("00");
            for(i=2; i<=7; i++)
                printf("%c",inp[i]);
        }
        else
        {
            for(i=0; i<=7; i++)
                printf("%c",inp[i]);
        }
    }
    else
    {
        if (fin_hrs == 12)
        {
            printf("12 : ");
            for(i=2; i<=7; i++)
                printf("%c",inp[i]);
        }
        else
        {
            fin_hrs = fin_hrs + 12;
            printf("%d",fin_hrs);
            for(i=2; i<=7; i++)
                printf("%c",inp[i]);
        }
    }
}
int main()
{
	printf("Enter time in AM/PM format : ");
   char inp[10];
   	scanf("%s",inp);
	military_std(inp);
   return 0;
}
