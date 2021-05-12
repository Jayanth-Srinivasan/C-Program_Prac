#include <stdio.h>
int main() {
    char name[30];
    long int reg;
    char btype;
    float grade;
    printf("Enter the name:  \n");
    scanf("%s",&name);
    printf("Enter the Roll No: \n");
    scanf("%ld",&reg);
    printf("Enter the Blood Group: \n");
    scanf("%s",&btype);
    printf("Enter the Grade: \n");
    scanf("%f",&grade);
    printf("Student Details:%s%ld%s%f",name,reg,btype,grade);
    return 0;
}