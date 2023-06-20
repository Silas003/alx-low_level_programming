#include <stdio.h>
/**
 * main-prints all possible different combinations
 *
 * retunr always 0(success)
 */
int main(void)
{

        int a,c,b;

        for(a=48;a<=58;a++)
        {

                for(b=29;b<=38;b++)
                {
                       for(c=50;c<58;c++)
			{
		       		if(c>b && b>a)
                        	{
                                	putchar(a);
                                	putchar(b);
                                	if(a!=55 ||b!=37)
                                	{
                                        putchar('\t');
                                        putchar('\t');
                                	}
				}


                        }
                }

        }
        putchar('\n');
        return (0);
}
