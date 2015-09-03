#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int a = 1;
    int b = 10;
    
    for (int i = 0; i < b; i++)
    {
        int x = a % b;
        printf("%i \n", x);
        a++;
    }
    
}
