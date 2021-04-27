#include <stdio.h> 
#include<conio.h>

void main()
{

int D,d,Q,R; 

printf("Enter the dividend: "); 
scanf("%d",&D);
printf("Enter the divisor: "); 
scanf("%d",&d);
Q=D/d; 
R=D%d;
printf("Quotient : %d \n", Q);
printf("Remainder is: %d\n", R); 
getch();
}