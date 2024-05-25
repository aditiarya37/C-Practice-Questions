#include<stdio.h>
int main(){
    int arr[10],n,flag = 0,loc;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number which you want to find= ");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        if(arr[i]==n){
            flag = 1;
            loc = i;
        }
    }
    if(flag){
        printf("The number %d is located at %d position in this array.",n,loc+1);
    }
    else{
        printf("No such number exists in the array.");
    }
    return 0;
}