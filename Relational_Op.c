#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main() {
    int a,b;
    bool c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    c=(a==b);
    printf("a==b %d \n",c);
    c=(a<b);
    printf("a<b %d \n",c);
    c=(a>b);
    printf("a>b %d \n",c);
    c=(a<=b);
    printf("a<=b %d \n",c);
    c=(a<=b);
    printf("a>=b %d \n",c);
    c=(a!=b);
    printf("a!=b %d \n",c);
    return 0;
}