#include<stdio.h>
int main(){
    int yr;
    printf("Enter a year= ");
    scanf("%d",&yr);
    if(yr%4==0){
        printf("It is a leap year.");
    }
    else{
        if(yr%100!=0){
            printf("It is a leap year.");
        }
        else{
            if(yr%400==0){
                printf("It is a leap year.");
            }
            else{
                printf("It is not a leap year.");
            }
        }
    }
    return 0;
}