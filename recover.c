#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        fprintf(stderr, "Usage: recover infile\n");
        return 1;
    }

    // save file name
    char *infile = argv[1];

    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    int count = 0;
    for (int i = 0; i < 100000000; i++)
    {
        int block[512];
        fread(block, 1, 512, inptr);

        // if (block[0] == 0xff && block[1] == 0xd8 && block[2] == 0xff)
        // {
        //     printf("start");
        // }

        //printf("%x, %i, %i\n", block[0], block[1], block[2]);

        if (block[0] == -520103681)
        {
            count++;
            printf("%i:Start\n", count);
        }

    }
    return 1;
}

