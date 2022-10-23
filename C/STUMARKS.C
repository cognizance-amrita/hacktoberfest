#include <stdio.h>
#include <string.h>
struct student {
    char Name[500];
    int marks1;
    int marks2;
    int marks3;
} ;
int main()
{
    int n,m1,m2,m3,i;
    char nam[100];
    struct student s[n];
    scanf("%d",&n);
    for (i = 1; i <= n; ++i) 
    {
        scanf("%s %d %d %d",s[i].Name,&s[i].marks1,&s[i].marks2,&s[i].marks3);
    }
    printf("enter a name:");
    scanf("%s",nam);
    for (i =1; i <= n;i++)
    {
        if(strcmp(s[i].Name,nam)==0)
        {
            int avg=(s[i].marks1+s[i].marks2+s[i].marks3)/3;
            printf("the average is:%d",avg);
        }
    }
    return 0;
}
