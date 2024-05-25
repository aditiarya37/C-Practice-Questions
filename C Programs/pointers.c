#include<stdio.h>
int inc(int *a);
int main(){
    int i=5;
    printf("%d\n",i);
    inc(&i);
    return 0;
}
int inc(int *a){
    *a *= 10;
    printf("%d\n",*a);
}