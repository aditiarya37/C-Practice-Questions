#include<stdio.h>
int main(){
    int arr1[5],arr2[5],sum[5];
    printf("Enter the first array= \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the second array= \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr2[i]);
    }
    printf("The sum of the arrays is= \n");
    for(int i=0;i<5;i++){
        sum[i] = arr1[i] + arr2[i];
    }
    for(int i=0;i<5;i++){
        printf("%d\t",sum[i]);
    }
    return 0;
}