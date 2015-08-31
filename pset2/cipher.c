#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check_key(int n);
string encrypt(string s, int a);

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
       // check, if the key is a positive integer
       check_key(k);
       
       if (k > 26)
       {
            k = k - 26;
       }
       
       // get the text that should be encrypted
       printf("Please enter your cipher text: \n");
       string p = GetString();
       
       //iterate over the string and encipher character by character
       string encrypted_text = encrypt(p, k);
       printf("%s \n", encrypted_text);
   }
        
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
        return n;
    }
}

//function to encryp the text
string encrypt(string s, int a) 
{
    //check, if a character in the string is an alphabetic letter. if yes, encrypt it. if not, print it. 
    for (int i = 0; i < strlen(s); i++)
	{
	    if (isalpha(s[i]))
	    {
	        int x = (int) s[i];
	        printf("%i \n", x);
	    }
	    else
	    {
	        printf("%c \n", s[i]);
	    }
	}
	return "hello";
}
