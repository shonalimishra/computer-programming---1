#include <stdio.h>

int main()
{
int bytes, kb,mb,gb;

printf("Enter value in bytes: ");
scanf("%d" , &bytes);

kb = bytes/1024;
mb = kb/1024;
gb = mb/1024;

printf("Value in kilobytes: %d\n", kb);
printf("Value in megabytes: %d\n", mb);
printf("Value in gigabytes: %d\n", gb);
return 0;
}
