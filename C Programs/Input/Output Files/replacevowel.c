#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("VowelString.txt","r");
    char str[100];
    fgets(str,100,fptr);
    // Hello! I am Aditi Arya.
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        char c;
        c = str[i];
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
            count++;
        }
    }
    fclose(fptr);
    fptr = fopen("VowelString.txt","w");
    fprintf(fptr,"Number of Vowels: %d",count);
    fclose(fptr);
    return 0;
}