#include "factors.h"
#include <math.h>
/**
 * diviseur1 - get
 *
 * @n: number
 *
 * Description: define one div
 *
 * Return: Divisor or one
 */
uli diviseur1(uli n)
{
	double n_ = n;
	double sq = sqrt(n_);
	uli sqrt_int = (uli)0;
	uli d = 2;

	sq++;
	while (d < sqrt_int)
	{
		if (n % d == 0)
			return (d);
		d = (d == 2) ? d + 1 : d + 2;
	}
	return (1);
}
