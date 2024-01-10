#include <stdio.h>
int main()
{
   char Op;
   float num1, num2, result = 0;
   printf("Enter any one operator +, -, *, / : \n ");
   scanf("%c", &Op);
   printf("Enter the values of Operands num1 and num2: \n ");
   scanf("%f%f", &num1, &num2);
   switch(Op)
   {
      case '+': result = num1 + num2;
         break;
      case '-': result = num1 - num2;
         break;
      case '*': result = num1 * num2;
         break;
      case '/': result = num1 / num2;
         break;
      default: printf("Invalid Operator \n ");
   }
   printf("The value of result = %f", result);
   return 0;
}
