#include <stdio.h>

int main()
{
int h, len, area;

printf("Enter length of triangle: ");
scanf("%d",&len);

printf("Enter height of triangle: ");
scanf("%d",&h);

area = len*h/2;

printf("Area of triangle: %d\n", area);
return 0;
}
