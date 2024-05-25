#include<stdio.h>
struct student{
    char name[100];
    int marks;
    float cgpa;
    char course[100];
};
int main(){
    FILE *fptr;
    fptr = fopen("StudentRecord.txt","w");
    struct student s1 = {"Aditi Arya",98,9.5,"BECSE"};
    struct student s2 = {"Arya Ramesan",88,8.5,"BECSE"};
    struct student s3 = {"Siddhi Kalyani",94,9.1,"BECSE"};
    struct student s4 = {"Sachin",83,8.1,"BECSE"};
    struct student s5 = {"Raghav Ranga",80,7.9,"BECSE"};

    fprintf(fptr,"Name                Marks  CGPA  Course\n");
    fprintf(fptr,"%-20s%-7d%-6.2f%-10s\n",s1.name,s1.marks,s1.cgpa,s1.course);
    fprintf(fptr,"%-20s%-7d%-6.2f%-10s\n",s2.name,s2.marks,s2.cgpa,s2.course);
    fprintf(fptr,"%-20s%-7d%-6.2f%-10s\n",s3.name,s3.marks,s3.cgpa,s3.course);
    fprintf(fptr,"%-20s%-7d%-6.2f%-10s\n",s4.name,s4.marks,s4.cgpa,s4.course);
    fprintf(fptr,"%-20s%-7d%-6.2f%-10s\n",s5.name,s5.marks,s5.cgpa,s5.course);
    fclose(fptr);
    return 0;
}