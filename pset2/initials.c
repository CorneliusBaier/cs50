#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// find the initials of a name

int main(void)

{

    // get the name
    string name = GetString();
    
    // find first letter of every part of the name
    for (int i = 0; i < strlen(name); i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            printf("%c", toupper(name[i]));
        }
    }
    printf("\n");
    
}
