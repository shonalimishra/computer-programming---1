#include <stdio.h>

int main()
{
float p,r,i;
int n;

printf("Enter principal amount: ");
scanf("%f" ,&p);

printf("Enter rate of interest: ");
scanf("%f" , &r);

printf("Enter number of years: ");
scanf("%d", &n);

i =(p*r*n)/100;

printf("Interest amount: %.2f\n",i);
return 0;
}
