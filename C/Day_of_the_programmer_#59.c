#include <stdio.h>
int main(){
    int y;
    scanf("%d",&y);        //Input year
    if(y<1918){.           //Checking Julian year
        if(y%4==0){         //Julian leap year checking 
            printf("12.09.%d",y);
        }
        else{
            printf("13.09.%d",y);
        }
    }
    else if(y>1918){          //Checking Gregorian year 
        if(y%400==0||(y%4==0&&y%100!=0)).      //gregorian leap year
        printf("12.09.%d",y);
        else {
        printf("13.09.%d",y);
        }
    }
    else{
        printf("26.09.%d",y);             
    }
    
}
