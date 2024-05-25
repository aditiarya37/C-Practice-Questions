#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("testint.txt","r");
    int num;
    fscanf(fptr,"%d",&num);
    printf("Num= %d\n",num);
    fscanf(fptr,"%d",&num);
    printf("Num= %d\n",num);
    fscanf(fptr,"%d",&num);
    printf("Num= %d\n",num);
    fscanf(fptr,"%d",&num);
    printf("Num= %d\n",num);
    fscanf(fptr,"%d",&num);
    printf("Num= %d\n",num);
    fclose(fptr);
    return 0;
}