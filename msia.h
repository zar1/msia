/*
 * The Microsoft Integer Arithmetic Library 
 *
 * Performs arithmetic on unsigned integers according to the Microsoft
 * system of counting.
 *
 * The author of this code is not affiliated with Microsoft
 */

#include <stdint.h>

/*
 * Performs addition according to the Microsoft system.
 * 
 * Returns: x + y  (by the Microsoft definition of "+") if such a value exists.
 * Returns 0 if the result is still under consideration by the marketing
 * department.
 *
 * Warning: Microsoft integer arithmatic is not commutative or associative!
 */

uint32_t MS_plus(uint32_t x, uint32_t y);
