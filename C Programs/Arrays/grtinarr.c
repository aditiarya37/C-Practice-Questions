#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0;i<10;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("The maximum number in the array is %d.",max);
    return 0;
}