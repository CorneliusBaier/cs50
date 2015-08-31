#include <stdio.h>
#include <cs50.h>

int check_key(int n);

int main(int argc, string argv[])

{

    // check, if we have only one command line argument, which is going to be the cipher
   if (argc != 2)
   {
       printf("Please enter only one command line argument!! \n");
       return 1;
   }
   else
   {
       printf("Please enter your cipher text: \n");
       string text = GetString();
       printf("thanks for entering %s \n", text);
   }
        
}

int check_key(int n)
{

    if (n < 1) 
    {
       printf("Please enter a positive integer!!\n");
       return 1;
    }
    else
    {
        return n;
    }
}
