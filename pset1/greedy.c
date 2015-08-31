#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float money = -1;
    while (money <= 0)
    {
        printf("O hai! How much change is owed? ");
        money = GetFloat();
    }
    
   
    money = money * 100;
    double temp = round(money);
    int amount = (int) temp; 
    int count = 0;
    
    int rest = amount % 25;
    int temp2 = amount - rest;
    count = count + temp2 / 25;
    
    amount = rest;
    rest = amount % 10;
    temp2 = amount - rest;
    count = count + temp2 / 10;
    
    
    amount = rest;
    rest = amount % 5;
    temp2 = amount - rest;
    count = count + temp2 / 5;
    
    
    amount = rest;
    rest = amount % 1;
    temp2 = amount - rest;
    count = count + temp2 / 1;
    
    
    printf("%d\n", count);

}
