#include <stdio.h>
/**
 * main-prints alphabet
 *
 * retunr always 0(success)
 */
int main(void)
{
       char alp[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int a;

        for(a=0;a<52;a++)
        {
                putchar(alp[a]);
        }
        putchar('\n');
        return (0);
}
