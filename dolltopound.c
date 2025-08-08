#include <stdio.h>

int main()
{
float dollar,pound;
int rupees;

printf("Enter amount in dollars: ");
scanf("%2f" ,&dollar);

rupees = (int)dollar * 48;
pound = (float)rupees/70;
printf("Amount in pound: %2f\n" , pound);
return 0;
}
