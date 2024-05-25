#include<stdio.h>
int main(){
    int num,i,j=0,a;
    printf("Enter a number= ");
    scanf("%d",&num);
    a=num;
    while(a>0){
        i = a%10; 
        j += (i*i*i);
        a /= 10;
    }
    if(j==num){
        printf("The number is an Armstrong number.");
    }
    else{
        printf("The number is not an Armstrong number.");
    }
    return 0;
}