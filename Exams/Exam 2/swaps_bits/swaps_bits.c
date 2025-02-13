/* Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100 */

#include <stdio.h>

int main()
{
	unsigned char b;
	unsigned char c;

	unsigned char a = 0b01000001;
	printf("%d\n", a);

	b = a << 4;
	//0b00001000;
	c = a >> 4;
	printf("%d\n", b);
	printf("%d\n", c);
	int result = b | c;

	printf("(%d)", result);


}
