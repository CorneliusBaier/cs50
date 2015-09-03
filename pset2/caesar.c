#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check_key(int n);
void encipher(string s, int a);

int main(int argc, string argv[])

{

    // check, if we have only one command line argument, which is going to be the cipher
   if (argc != 2)
   {
       printf("Please enter exactly one command line argument!! \n");
       return 1;
   }
   else
   {
       
       int k = atoi(argv[1]);
       // check, if the key is a positive integer and change it, if it's bigger than 26
       k = check_key(k);
       
       // get the text that should be encrypted
       
       string p = GetString();
       
       //iterate over the string and encipher character by character
       encipher(p, k);
      
   }
   
   return 0;
        
}

//function to check, if the entered key is a positive integer
int check_key(int n)
{

    if (n < 1) 
    {
       printf("Please enter a positive integer!!\n");
       return 1;
    }
    else
    {
    // check, if k (which is n here) is between 1 and 26 and change k if not
        
        if (n > 26)
        {
            n = n % 26;
            
        }
        return n;
    }
}

//function to encipher the text
void encipher(string s, int a) 
{
    
    //check, if a character in the string is an alphabetic letter. if yes, encrypt it. if not, print it. 
    for (int i = 0; i < strlen(s); i++)
	{
	    if (isalpha(s[i]))
	    {
	        int x = (int) s[i];
	        // encipher
	        x = x + a;
            
            if isupper(s[i])
            {
                if (x > 90)
                {
                    x = x - 26;
                }
            }
            else
            {
                if (x > 122)
                {
                    x = x - 26;
                }
            }            
            	       
	        char c = (char) x;
	        
	        printf("%c", c);
	        
	    }
	    else
	    {
	        printf("%c", s[i]);
	    }
	}
	printf("\n");
	
}
