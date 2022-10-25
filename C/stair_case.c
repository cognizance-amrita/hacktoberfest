#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
   
int main(){

    int p;
    scanf("%d",&p);
    int stair_case = p - 1;
    
    for (int i = 0; i < p; ++i){
        for (int j = 0; j < p; ++j){
            if (j >= stair_case){
                printf("#");
            } else{
                printf(" ");
            }
        }
        stair_case -= 1;
        printf("\n");
    }    
    return 0;
}
