#include<stdio.h>
#include<conio.h>

int main(){
    int n,high=-100,ans=-100;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]>high){
            ans = high;
            high = arr[i];
        }
        else if (arr[i]>ans && arr[i]<high){
            ans = arr[i];
        }
    }
    printf("%d",ans);
    return 0; 
}