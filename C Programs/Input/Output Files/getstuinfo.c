#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("StudenInfo.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter student's name= ");
    scanf("%s",name);
    printf("Enter student's age= ");
    scanf("%d",&age);
    printf("Enter student's cgpa= ");
    scanf("%f",&cgpa);

    fprintf(fptr,"Student's Name: %s\n",name);
    fprintf(fptr,"Student's Age: %d\n",age);
    fprintf(fptr,"Student's CGPA: %f",cgpa);

    fclose(fptr);
    return 0;
}