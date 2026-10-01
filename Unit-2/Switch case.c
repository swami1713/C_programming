##include <stdio.h>

int main()
{
int choice

flost num1, num2, result;

do
{
printf("\n MENU-DRIVEN CALCULATOR\n");

printf("1. Addition\n"); printf("2. Subtraction\n"); printf("3. Multiplication\n"); printf("4. Divisionin"); printf("5. Exit\n");

printf("Enter your choice: ");

scanf("%d", &choice);
}
if (choice > 1 && choice <4)
{
printf("Enter two numbers:" scanf("%f %f", &num1, &num2);
}
switch (chaice)
{
result numinum2; printf("Result-%.2f\n", result); break;
}
case 2:
{
result num1-num2; printf("Result = %.2f\n", result); break:
}
case 3:
{
result num num2; printf("Result%.2f\n", result); break;
}
case 4:

if (num2 10)
{
result num1/num2; printf("Result%.2f\n", result);
}
else
{
printf("Division by zero is not possible. \n");
}
break;

case 5:{ printf Exiting the calculator\n"); break;
       }
default:
{
printf("Invalid choice. Please try again.\n");
}
)while (choice 1-5);

return 0;
}
