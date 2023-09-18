#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: the string to be reversed
 *
 * Return: string in reversed form
 */

void rev_string(cahr *s)
{       
        char rev = s[0];
        int count = 0;
        int i;
        
        while (s[count] != '\0')
                count++;
        
        for (i=0; i<count; i++)
        {       
                count --;
                rev = s[i];
                s[i] = s[count];
                s[count] = rev;
        } 
}