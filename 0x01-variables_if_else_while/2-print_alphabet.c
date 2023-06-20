#include <stdio.h>
/**
 * main-prints alphabet
 *
 * retunr always 0(success)
 */
int main(void)
{
	char alph[26]="abcdefghijklmnopqrstuvwxyz";
	int a;
	
	for(a=0;a<26;a++)
	{
		putchar(alph[a]);
	}
	putchar('\n');
	return (0);
}
