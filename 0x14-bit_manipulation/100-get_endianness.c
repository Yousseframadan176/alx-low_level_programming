#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int num = 1;  /* An integer with value 1 */
	char *byte = (char *)&num;  /* Pointer to the first byte of the integer */

	/* Check the value of the first byte to determine endianness */
	return (*byte);
}
