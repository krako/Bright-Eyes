/*
	Rewrite of DSA1 Generator v1.05_de seg003 (random)
	Functions rewritten: complete
*/

#include <stdlib.h>

#include "schick.h"

#include "g105de_seg003.h"

static inline
unsigned short my_rol16(unsigned short op, unsigned char count) {
	return (op << count) | (op >> (16 - count));
}

/**
	random_interval_gen - generates a u16 random number between lo and hi
*/
unsigned short random_interval_gen(unsigned short lo, unsigned short hi) {

	return lo + random_gen(hi - lo + 1) - 1;
}

/**
	random_gen - generates a u16 random number
*/
unsigned short random_gen(short val) {

	Bit16u si, ax;

	if (val == 0)
		return 0;

	si = ds_readw(0x1fd6) ^ ds_readw(0x458f);
	ax = my_rol16(si, 2) + ds_readw(0x458f);
	ax = ax ^ ds_readw(0x1fd6);
	si = my_rol16(ax, 3);

	ds_writew(0x1fd6, si);		/* update rand_seed */
	si = abs(si) % val;

	return si + 1;
};