#include <stdio.h>

int main()
{
int choice, a, b, sum,diff, prod;
float div;

printf("Enter 1 for addition\n");
printf("Enter 2 for subtraction\n");
printf("Enter 3 for multiplication\n");
printf("Enter 4 for division\n");
printf ("Enter your choice: ");
scanf("%d" , &choice);
if (choice==1 || choice==2 || choice==3)
{
printf("Enter number 1: ");
scanf("%d" ,&a);

printf("Enter number 2: ");
scanf("%d" ,&b);
}
else if(choice==4)
{
printf("Enter dividend: ");
scanf("%d" ,&a);

printf("Enter divisor: ");
scanf("%d" ,&b);
}
if(choice ==1){
sum = a + b;
printf("Sum is: %d\n ", sum);
}

else if(choice ==2){
if (a>b){
diff = a - b;
}
else{
diff = b -a;
}
printf("Difference is: %d\n ", diff);
}
else if(choice ==3){
prod = a*b;
printf("Product is: %d\n ", prod);
}

else if(choice ==4){
div =(float)a/b;
printf("Division is: %2f\n ", div);
}

else{
printf("Invalid choice.\n");
}

return 0;
}
