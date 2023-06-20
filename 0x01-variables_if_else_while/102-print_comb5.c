#include <stdio.h>
/**
 * main-prints all possible different combinations
 *
 * retunr always 0(success)
 */
int main(void)
{

        int a,b,c;

        for(a=0;a<=100;a++)
        {

                for(b=0;b<=100;b++)
                {
                       for(c=50;c<58;c++)
                        {
                                if(a<b )
                                {
                                        putchar((a/10)+48);
					putchar((a%10)+48);
					putchar('\n');
					putchar((b/10)+48);
                                        putchar((b%10)+48);
                                        if(a!=98 ||b!=99)
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
