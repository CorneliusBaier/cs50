#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char t[] = "hier s%%eht w4s";
	for (int i = 0; i < strlen(t); i++)
	{
	    if (isalpha(t[i]))
	    {
	        int x = (int) t[i];
	        printf("%i \n", x);
	    }
	    else
	    {
	        printf("%c \n", t[i]);
	    }
	}
}
