/*
while the length of list > 0
    look at middle of the list
    if number found, return true
    else if number highter, search left
    else if number lower, search right
return false


*/

#include <stdio.h>
#include <string.h>

int main()
{

    int test[] = {5, 3, 1, 2, 4, 15, 11, 10, 6, 8, 7, 12, 9, 14, 13};
    
    int length = sizeof(test)/sizeof(test[0]), c, d, swap;
    
    for (c = 0 ; c < ( length - 1 ); c++)
    {
        for (d = 0 ; d < length - c - 1; d++)
        {
            if (test[d] > test[d+1]) 
            {
                swap       = test[d];
                test[d]   = test[d+1];
                test[d+1] = swap;
            }
        }
    }
    
    for (int n = 0; n < length; n++)
    {
        printf("%i \n", test[n]);
    }
    
}
