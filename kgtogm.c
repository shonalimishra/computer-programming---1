#include <stdio.h>

int main()
{
float gm, kg;

printf("Enter weight in kilograms: ");
scanf("%2f", &kg);
gm = kg*1000;

printf("Weight in grams: %2f\n" ,gm);
return 0;
}
