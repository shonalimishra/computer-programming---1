#include <stdio.h>

int main()
{
float c,f;

printf("Enter temperature in Celsius: ");
scanf("%2f", &c);

f = (9/5 *c) + 32;

printf("Temperature in Fahrenheit: %2f\n", f);
return 0;
}
