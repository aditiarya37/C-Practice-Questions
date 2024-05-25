#include<stdio.h>
int main(){
    int arr[10],n;
    printf("Enter the number of elements= ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
