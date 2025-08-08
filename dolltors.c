#include <stdio.h>

int main()
{
float dollar;
int rupees;

printf("Enter amount in dollar: ");
scanf("%2f" ,&dollar);

rupees = (int)dollar * 48;

printf("Amount in rupees: %d\n" , rupees);
return 0;
}
