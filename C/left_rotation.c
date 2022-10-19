#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    scanf("%d",&s);
    int a[5];
    for (int i = 0; i < n; i++)
    scanf("%d",&a[i]);
    for (int i = 0; i < s; i++)
    {
        int t=a[0];
        for (int j = 0; j<n-1; j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=t;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}