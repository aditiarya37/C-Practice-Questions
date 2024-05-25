#include<stdio.h>
#include<string.h>
int main(){
    char str[100],newstr[100];
    int j=0;
    fgets(str,100,stdin);
    for(int i=0;i<strlen(str);i++,j++){
        if(str[i] != ' ' && str[i] != '\n'){
            newstr[j] = str[i];
        }
    }
    newstr[j] = '\0';
    puts(newstr);
    return 0;
}