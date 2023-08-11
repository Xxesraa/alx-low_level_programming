#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: print alphabets in lowercase than in uppercase
 *
 * Return:Alawys 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char ch = 'A';
		/*prints a - z*/
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		 /*prints A - Z*/
		while (ch <= 'Z')
		{
			putchar(CH);
			CH++;
		}
		 putchar('\n');

	return (0);
}
