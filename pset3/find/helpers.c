/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"
#include <stdio.h>
/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    //int length = sizeof(values)/sizeof(values[0]);
    int result = 1;
    
    int middle = n / 2;
    
    while (n > 0)
    {
        
        int temp = values[middle];
        printf("%i \n", middle);
        
        if (temp == n)
        {
            result = 1;
            break;
        }
        else if (temp < values[n])
        {
            middle = (n - middle) / 2;
            n = n / 2;
            result = 0;
        }
        else
        {
            middle = (n - middle) / 2 + middle;
            n = n / 2;
            result = 0;
        }       
    
    }
    
    if (result == 1)
        return true;
    else
        return false;   


/*    int counter = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (value == values[i])
        {
            counter++;
        }
    }
    
    if (counter > 0)
    {
        return true;
    }
    else
    {
        return false;
    }*/
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // bubble sort
   int c, d, swap;
   
   for (c = 0 ; c < ( n - 1 ); c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (values[d] > values[d+1]) 
            {
                swap       = values[d];
                values[d]   = values[d+1];
                values[d+1] = swap;
            }
        }
    }

    
 /*  for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (values[i] > values[j])
            {
                int temp = values[j];
                values[j] = values[i];
                values[i] = temp;
            }
        }
    }
    
    
    
        for (int m = 0; m < n; m++)
    {
        printf("%i \n", values[m]);
    }*/
    
}
