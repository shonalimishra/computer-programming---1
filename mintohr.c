#include <stdio.h>

int main()
{
int min;
float hour;

printf("Enter time in minutes: ");
scanf("%d", &min);

hour = (float)min/60;

printf("Time in hours: %2f\n", hour);
return 0;
}
