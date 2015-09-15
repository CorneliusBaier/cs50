/*
while the length of list > 0
    look at middle of the list
    if number found, return true
    else if number highter, search left
    else if number lower, search right
return false

*/

#include <stdio.h>


int main()
{

    int test[] = {5, 3, 1, 2, 4};
    
    int length = sizeof(test)/sizeof(test[0]);
    
    // int smallest = 0;
    
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (test[i] > test[j])
            {
                int temp = test[j];
                test[j] = test[i];
                test[i] = temp;
            }
        }
    }
    
    for (int n = 0; n < length; n++)
    {
        printf("%i \n", test[n]);
    }
    
}
