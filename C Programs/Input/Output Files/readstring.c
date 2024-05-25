#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("String.txt","r");
    char str[100];
    fgets(str,100,fptr);
    fclose(fptr);
    puts(str);
    return 0;
}