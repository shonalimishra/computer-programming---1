#include <stdio.h>

int main()
{
int per, area, side;

printf("Enter side of square: ");
scanf("%d",&side);

per = 4*side;
area = side*side;

printf("Perimeter of square: %d\n",per);
printf("Area of square: %d\n", area);
return 0;
}
