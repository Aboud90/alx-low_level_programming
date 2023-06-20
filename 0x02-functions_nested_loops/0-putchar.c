#include <stdio.h>
#include "main.h"

/**
 * main : return _putchar
 * following by new line
 * return : always return 0 
 */

int main(void)
{
    char tmp[9] = "_putchar";
    
    int i;
    
    for (i = 0; i < 8; i++)
    {
        _putchar(tmp[i]);
    }
    
    _putchar('\n');
   
    return 0;
}
