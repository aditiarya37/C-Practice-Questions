#include<stdio.h>
int main(){
    int i,j,str1[5],str2[5];
    printf("Enter first array: \n");
    for(i=0;i<5;i++){
        scanf("%d",&str1[i]);
    }
    printf("Enter second array: \n");
    for(j=0;j<5;j++){
        scanf("%d",&str2[j]);
    }
    int flag = 1;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                if(str1[i] == str2[j]){
                    flag = 0;
                }
            }
        }
    }
    if(flag==0){
        printf("The arrays are equal.");
    }
    else{
        printf("The arrays are not equal.");
    }
    return 0;
}