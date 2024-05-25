#include<stdio.h>
int main(){
    int arr[9] = {32,31,40,46,50,60,2,41,9};
    int low,mid,high;
    do{
        low = arr[0];
        high = arr[9];
        mid = (low+high)/2;
        if(mid==2){
            printf("Two is present.");
        }
        else if(mid>2){
            low = mid+1;
        }
        else{
            high = mid-1;
        } 
    }while(mid!=2);
    return 0;
}