#include <stdio.h>

int main()
{
float gross, dis, net;

printf("Enter gross sales: ");
scanf("%f", &gross);

dis = 0.1 * gross;

net = gross - dis;

printf("Net sales: %f\n",net);
return 0;
}
