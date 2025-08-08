#include <stdio.h>

int main()
{
int a,b,diff;

printf("Enter number 1: ");
scanf("%d" ,&a);

printf("Enter number 2: ");
scanf("%d" ,&b);

if (a>b)
diff = a-b;

else
diff = b-a;

printf("Difference is: %d\n", diff);
return 0;
}
