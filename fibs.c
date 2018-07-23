#include <stdio.h>
#include <cs50.h>
#include <string.h>



int sumFibs(int num)
{

    int prevNumber = 0;
    int currNumber = 1;
    int result = 0;

    while (currNumber <= num)
    {
        if (currNumber % 2 != 0)
        {
            result += currNumber;
        }

        currNumber += prevNumber;
        prevNumber = currNumber - prevNumber;
    }

    return result;
}

int main (int argc, string argv[]) {

    if (argc != 2)
    {
        printf("Please enter an argument\n");
        return 1;
    }
    int k = atoi(argv[1]);

    //printf("%i",k);
    int f;
    f = sumFibs(k);

    printf("%i", f);

}