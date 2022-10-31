#include <stdio.h>

int main() {
    
    int n,k,b,sum=0;
    int bill[n];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bill[i]);
        if(i!=k)
        {
            sum+=bill[i];
        }
    }
    scanf("%d",&b);
    if((sum/2)==b)
    {
      printf("Bon Appetit");
    }
    else
    {
        printf("%d\n",(b-(sum/2)));
    }
    return 0;
}