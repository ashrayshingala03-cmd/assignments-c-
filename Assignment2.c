#include <stdio.h>
int factorial(int n)
{
  int i, fact = 1;
  for(i = 1; i <= n; i++)
    fact = fact * i;
  return fact;
}
int power(int x, int y)
{
  int i, result = 1;
  for(i = 1; i <= y; i++)
    result = result * x;
  return result;
}
int main()
{
  int a, b, choice;
  float div;
  do{
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Factorial\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Result = %d\n", a + b);
        break;
      case 2:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Result = %d\n", a - b);
        break;
      case 3:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Result = %d\n", a * b);
        break;
      case 4:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        if(b != 0)
        {
          div = (float)a / b;  
          printf("Result = %.2f\n", div);
        }
        else
          printf("Error: Division by zero\n");
        break;
      case 5:
        printf("Enter base and power: ");
        scanf("%d %d", &a, &b);
        printf("Result = %d\n", power(a, b));
        break;
      case 6:
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a >= 0)
          printf("Result = %d\n", factorial(a));
        else
          printf("Error: Factorial not defined\n");
        break;
      case 7: 
        printf("exit");
        break;
      
      default:
        printf("Invalid choice\n");
    }
  }while(choice!=7);
  return 0;
}
