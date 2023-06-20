#include <stdio.h>
/**
 * main-prints possible combinarions
 *
 * retunr always 0(success)
 */
int main(void)
{

        int a;

        for(a=28;a<38;a++)
        {
               putchar(a);
		if(a!=57)
                {
                        putchar('\t');
			putchar('\t');
                }
        }
        putchar('\n');
        return (0);
}
