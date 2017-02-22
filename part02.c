#include <stdio.h>
#include <assert.h>
#include "util.h"

/*
The bitwise AND (a&b) operator compares two numbers on
a bit level and returns a number where the bits of that
number are turned on if the corresponding bits of both
a and b are 1.

     a:   00101010   42
     b:   00001111   15
===================
   a&b:   00001010   10

As you see the 2's bit and the 8's bit are the only bits
that are on in both a and b, so a&b only contains those bits.

So remember for every given bit in a and b
  0 & 0 = 0
  0 & 1 = 0
  0 & 1 = 0
  1 & 1 = 1
*/

int main()
{
    /* TODO: Initialize a, b, c so that the tests pass */
    char bits = 0b1111; // Binary 15

    char a = 0b1111;
    char b = 0b0001;
    char c = 0b0101;

    assert((a & bits) == 0b1111);
    assert((b & bits) == 0b0001);
    assert((c & bits) == 0b0101);

    part_completed(2);

    return 0;
}