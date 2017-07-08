/*
 * implementation/implementation.c
 * Implements the sum() function defined in 'implementation.h' and is part of
 * the 'implementation' module.
 * Note that `SRC += implementation/implementation.c` must be added to the
 * module.mk file to be compiled during `make`.
 *
 * Erik Liodden
 */

#include "implementation.h"

/* sum: sum the integers a and b */
int sum(int a, int b)
{
	return a + b;
}
