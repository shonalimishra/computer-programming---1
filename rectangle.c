#include <stdio.h>

int main()
{
int per, area, len,br;

printf("Enter length of rectangle: ");
scanf("%d",&len);

printf("Enter breadth of rectangle: ");
scanf("%d",&br);

per = 2*(len + br);
area = len*br;

printf("Perimeter of rectangle: %d\n",per);
printf("Area of rectangle: %d\n", area);
return 0;
}
