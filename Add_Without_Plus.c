#include <stdio.h>
int main()
{
    int a,b;
    float c,d;

    printf("Enter the values "); 
    scanf("%d%d%f",&a,&b,&c);
    d=(a-(-b)-(-c));
    printf("The sum is: %f",d);

    return 0;

}