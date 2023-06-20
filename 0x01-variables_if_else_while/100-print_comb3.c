#include <stdio.h>
/**
 * main-prints all possible different combinations
 *
 * retunr always 0(success)
 */
int main(void)
{

        int a,b;

        for(a=48;a<=56;a++)
        {
    
        	for(b=29;b<=37;b++)
        	{
                	if(b>a)
			{	
				putchar(a);
				putchar(b);
				if(a!=56 ||b!=37)
				{
					putchar('\t');
					putchar('\t');
				}
			}
		}

        }
        putchar('\n');
        return (0);
}
