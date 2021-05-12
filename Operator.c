#include <stdio.h>
#include <conio.h>

int main() {
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    c=a+b;
    printf("Sum = %d \n",c);
    c=a-b;
    printf("Sub = % d \n",c);
    c=a*b;
    printf("Multiply = %d \n",c);
    c=a/b;
    printf("Division = %d \n",c);
    c=a%b;
    printf("Reminder = %d \n",c);

    return 0;
}
