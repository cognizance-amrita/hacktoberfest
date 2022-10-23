#include <stdio.h>
int main(){
    int n,k,sum=0,paid,tmp;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i =0;i<n;i++){
        scanf("%d",&tmp);
        if(k!=i){
        sum+=tmp;}
    }
    scanf("%d",&paid);
    if(paid==sum/2){
        printf("Bon Appetit");}
    else{
    printf("%d",paid-sum/2);}
    return 0;
}