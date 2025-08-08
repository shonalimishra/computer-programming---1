#include <stdio.h>

int main()
{
float gross, allow,ded, net;

printf("Enter gross salary: ");
scanf("%f", &gross);

allow = 0.1 * gross;
ded = 0.03 * gross;

net = gross + allow - ded;
printf("Net salary: %.2f\n" , net);
}
