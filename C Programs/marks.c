#include<stdio.h>
int main()
{
    int math,phy,chem;
    float total,per;
    printf("Enter maths marks= ");
    scanf("%d",&math);
    printf("Enter physics marks= ");
    scanf("%d",&phy);
    printf("Enter chemistry marks= ");
    scanf("%d",&chem);
    total=math+phy+chem;
    per=total/3;
    if(per>=40)
    {
        if(math>=33&&phy>=33&&chem>=33)
        {
            printf("You are passed. Your percentage is %f",per);
        }
        else
        printf("You are failed. Your percentage is %f",per);
    }
    else
    {
    printf("You are failed. Your percentage is %f",per);
    }
    return 0;
}