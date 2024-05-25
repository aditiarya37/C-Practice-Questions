#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
int main(){
    char *ptr;
    ptr = (char *) malloc(10*sizeof(char));
    printf("Memory created: %d\n",_msize(ptr));
    strcpy(ptr,"Aditi");
    printf("String stores: %s\n",ptr);
    ptr = (char *) realloc(ptr,20);
    printf("Memory created: %d\n",_msize(ptr));
    strcpy(ptr,"Aditi Arya");
    printf("String now stores: %s\n",ptr);
    free(ptr);
    return 0;
}