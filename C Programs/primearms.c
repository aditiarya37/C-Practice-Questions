#include<stdio.h>
#include<math.h>
int prime(int n);
int arms(int n);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(prime(num)){
        printf("Prime Number.");
    }
    else{
        printf("Not a prime number.");
    }
    if(arms(num)){
        printf("Armstrong Number.");
    }
    else{
        printf("Not an armstrong number.");
    }
    return 0;
}
int prime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
            break;
        }
    }
    return 1;
}
int arms(int n){
    int i,j,res=0,c=0;
    i =  n;
    while(i>0){
        i/=10;
        c++;
    }
    i = n;
    while(i>0){
        j = i%10;
        res += pow(j,c);
        i/=10;
    }
    if(res==n){
        return 1;
    }
    else{
        return 0;
    }
}