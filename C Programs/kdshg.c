#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "Hello World";
    int len = strlen(str);
    int i=0,end = len-1;
    while(i<=len){
        char temp = str[i];
        str[i] = str[end];
        str[end] = temp;
        i++;
        end--;
    }
    puts(str);
    return 0;
}