#include <stdio.h>

int main()
{
int sub1,sub2,sub3,tot,avg;

printf("Enter marks in subject 1: ");
scanf("%d" , &sub1);

printf("Enter marks in subject 2: ");
scanf("%d" , &sub2);

printf("Enter marks in subject 3: ");
scanf("%d" , &sub3);

tot = sub1 + sub2 + sub3;
avg= tot/3;

printf("Total of 3 subjects: %d\n",tot);
printf("Average of 3 subjects: %d\n",avg);
return 0;
}
