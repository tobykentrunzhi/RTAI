/*
 * cabs() wrapper for hypot().
 *
 * Written by J.T. Conklin, <jtc@wimsey.com>
 * Placed into the Public Domain, 1994.
 */

#include "math.h"
#include "mathP.h"

struct complex {
	double x;
	double y;
};

double cabs(struct complex z)
{
	return hypot(z.x, z.y);
}
