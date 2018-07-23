#include <stdio.h>
#include <cs50.h>
#include <string.h>

long long factorialize(int num)
{
    if (num < 0)
    {
        return -1;
    }
    else if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorialize(num - 1);
    }

}

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Please enter an argument\n");
        return 1;
    }
    int k = atoi(argv[1]);

    //printf("%i",k);
    int f;
    f = factorialize(k);

    printf("%i", f);

}