#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // first step: get the height of the pyramid and validate the user input
    
    int n = -1;
    while (n < 0 || n > 23)
    {
        printf("Height: ");
        n = GetInt();
        
    }
    
    // second step: draw the pyramid
    
    int spaces = n - 1;
    int hashes = 1;
    
    for (int i = n; i > 0; i--)
    {
        // draw spaces
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        // draw the extra # for whatever reason
        printf("#");
        
        // draw hashes
        for (int j = 0; j < hashes; j++)
        {
            printf("#");
        }
        
        spaces = spaces - 1;
        hashes = hashes + 1;
        
        // draw linebreak
        printf("\n");
        
    }
   
     
}
