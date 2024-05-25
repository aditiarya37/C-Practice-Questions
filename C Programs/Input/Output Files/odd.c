#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("OddNumbers.txt","w");
    int n;
    printf("Enter a number= ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d\n",i);
        }
    }

    fclose(fptr);
    return 0;
}