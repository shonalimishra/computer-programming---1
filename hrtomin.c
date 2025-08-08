#include <stdio.h>

int main()
{
int hour, min;

printf("Enter time in hours: ");
scanf("%d" , &hour);

min = hour*60;

printf("Time in minutes: %d\n", min);
return 0;
}
