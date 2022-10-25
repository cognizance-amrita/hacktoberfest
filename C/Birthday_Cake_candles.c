#include <stdio.h>
int birthdayCakeCandles(int heights[],int n){
    int hc=0,c=0,i=n;   
    while(n--)
        if(c<heights[n])
            c=heights[n];
    while(i--)
        if(c==heights[i])
            ++hc;
    return hc;
}
int main(){
    int n;
    scanf("%d",&n);
    int candles[n],size=n;
    while(n--)
        scanf("%d",&candles[n]);
    printf("%d",birthdayCakeCandles(candles,size));
    return 0;
}
