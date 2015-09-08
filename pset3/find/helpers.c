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
    int counter = 0;
    
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
    }
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    
   for (int i = 0; i < n - 1; i++)
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
    }
    
}
