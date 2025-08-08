#include <stdio.h>

int main()
{
float gm, kg;

printf("Enter weight in grams: ");
scanf("%2f", &gm);

kg = gm /1000;

printf("Weight in kilograms: %2f\n" ,kg);
return 0;
}

