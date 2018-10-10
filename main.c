#include <stdio.h>
#include <stdlib.h>

int reversedBinaryRep(int decimal)
{
    //ONLY WORKS WITH NUMBERS 4 BITS OR LESS
    for(int i = 0; i < 4; i++)
    {
        if(decimal%2==0)
        {
            printf("0");
        }else
        {
            printf("1");
        }
        decimal = decimal >> 1;
    }
}

int main()
{
    reversedBinaryRep(10);


    return 0;
}
