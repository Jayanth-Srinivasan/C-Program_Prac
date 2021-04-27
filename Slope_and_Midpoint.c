#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float s, m1, m2;

    printf("Enter the value of x1: ");
    scanf("%d",&x1); 
    printf("Enter the value of x2: ");
    scanf("%d",&x2); 
    printf("Enter the value of y1: ");
    scanf("%d", &y1); 
    printf("Enter the value of y2: ");
    scanf("%d",&y2); 
    s=(y2-y1)/(x2-x1);
    printf("slope of line segment is %f \n",s);
    m1=(x1+x2)/2; 
    m2=(y1+y2)/2;
    printf("The mid point of the given line segment is (%f,%f)",m1,m2);

    return 0;

}

