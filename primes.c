#include <stdio.h>
#include <cs50.h>
#include <string.h>

int isPrime(int number)
{
    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0 && number != i)
        {
            return false;
        }
    }
    return true;
}

int sumPrimes(int num)
{

  if (num == 1)
  {
    return 0;
  }

  if (isPrime(num) == false)
  {
    return sumPrimes(num - 1);
  }
    return num + sumPrimes(num - 1);
}

int main (int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Please enter an argument\n");
        return 1;
    }
    int k = atoi(argv[1]);

    //printf("%i",k);
    int f;
    f = sumPrimes(k);

    printf("%i", f);

}