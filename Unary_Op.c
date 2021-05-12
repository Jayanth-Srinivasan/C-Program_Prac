#include <stdio.h>
#include <conio.h>

int main() {
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Unary + = %d \n",+a);
    printf("Unary - = %d \n",-a);
    printf("Incre ++ = %d \n",++a);
    printf("Incre -- = %d \n",--a);

    return 0;
}