#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char test = '%';
    
    if (isalpha(test))
    {
        printf("ist alpha \n");
    }
    else
    {
        printf("ist nicht alpha \n");
    }
    
}
