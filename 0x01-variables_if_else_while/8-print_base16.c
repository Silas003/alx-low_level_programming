#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main-prints alphabet withouy q and e
 *
 * retunr always 0(success)
 */
int main(void)
{

        int a;

        for(a=48;a<58;a++)
        {
		putchar(a);
        }	     	
	for(a=97;a<103;a++)
	{
                putchar(a);
                
        }
        putchar('\n');
        return (0);
}
