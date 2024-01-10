#include <stdio.h>
#include<math.h>

int main()
{

  int num,n, i, flag = 0;
  int n2,remainder, result = 0;
  printf("Enter a positive integer:\n ");
  scanf("%d", &num);
  n=num;

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
 // if (n == 0 || n == 1)
    flag = 0;

  for (i = 2; i <= n / 2; ++i)
    {

      if (n % i == 0) //if n is divisible by i, then n is not prime, change flag to 1 for non-prime number
    {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.\n", num);
  else
    printf("%d is not a prime number.\n", num);


    // armstrong number:



    n=num;

    while (n > 0)
    {
       remainder = n % 10;
       result += (remainder*remainder*remainder);
       n /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}


