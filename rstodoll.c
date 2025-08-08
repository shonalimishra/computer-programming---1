#include <stdio.h>

int main()
{
float dollar;
int rupees;

printf("Enter amount in rupees: ");
scanf("%d" ,&rupees);

dollar = (float)rupees/ 48;

printf("Amount in dollars: %2f\n" , dollar);
return 0;
}
