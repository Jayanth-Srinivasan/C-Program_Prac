#include <stdio.h>
int main() {
    float t,f;
    printf("Enter Temperature : ");
    scanf("%.2f",&t);
    f=((5/9)*(t-32));
    printf("Temperature in Fahernheit : %.2f",f);
    return 0;
}