#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
    char ch = 'a';
    for (ch = 'a'; ch <= 'z'; ch++){
    	if(ch=='e' || ch=='q')
    		continue;
	putchar(ch);
    }
    return (0);
}
