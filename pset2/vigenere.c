#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check_key(string n);
void encipher(string s, string a);

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
       
       string key = argv[1];
       // check, if the key is a string of characters
       int i = check_key(key);
       if (i == 1)
       {
            exit(1);
       }
       // get the text that should be encrypted
       
       string input = GetString();
       
       //iterate over the string and encipher character by character
       encipher(input, key);
      
   }
   
   return 0;
        
}

//function to check, if the entered key is a string containing only characters
int check_key(string n)
{

    for (int i = 0; i < strlen(n); i++)
    {
        if (!isalpha(n[i]))
        {    
            printf("Please enter a string!!\n");
            return 1;
        }
    }
    return 0;
}

//function to encipher the text
void encipher(string input, string key) 
{
    
    // build the array that contains the ints extracted from the key
 
    int x = strlen(key);

    int indizes[strlen(key)];
    char result[strlen(input)];
    
    
    for (int i = 0; i < x; i++)
    {
        if (isupper(key[i]))
        {
            indizes[i] = (int) key[i] - 65;
            // printf("%i \n",indizes[i]);
        }
        else
        {
            indizes[i] = (int) key[i] - 97;
            // printf("%i \n",indizes[i]);
        }
        
    }

    
    // use the key to encipher the input-text
    
    // int index = 0;
    int a = 0;
    
    for (int i = 0; i < strlen(input); i++)
    {
        
        int b = strlen(key);
        int c = a % b;
        int temp = (int) input[i] + indizes[c];
        
        if ((int) input[i] == 32)
        {
            result[i] = (char) 32;
            a--;
        }
        else
        {
            if (isupper(input[i]))
            {
                if (temp > 90)
                {
                    temp = temp - 26;
                    result[i] = (char) temp;
                }
                else 
                {
                    result[i] = (char) temp;
                }
            }
            else
            {
                if (temp > 122)
                {
                    temp = temp - 26;
                    result[i] = (char) temp;
                }
                else 
                {
                    result[i] = (char) temp;
                }
            }
          }
        
        a++;

    } 
   
    for (int i = 0; i < strlen(input); i++)
    {
           
        printf("%c", result[i]);
    }
    printf("\n");
    
	
}
