#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],sum[3][3];
    printf("Enter the first array= \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the second array= \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The sum of the array= \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}