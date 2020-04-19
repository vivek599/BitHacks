#pragma once
 
#include <assert.h> 

#include <string>
#include <queue>

using namespace std;

bool IsOdd( int n )
{
	return n & 1;
}

bool BitIsOppositeSign(int x, int y)
{
	return ((x ^ y) < 0);
}

int BitAddOne(int n)
{
	return  -~n;
}

void swap(int& x, int& y)
{
	if (x != y)
	{
		x = x ^ y;
		y = x ^ y;
		x = x ^ y;
	}
}

// Function to turn on k'th bit in n
int TurnOnKthBit(int n, int k)
{
	return n | (1 << (k - 1));
}

// Function to turn off k'th bit in n
int TurnOffKthBit(int n, int k)
{
	return n & ~(1 << (k - 1));
}

// Function to check if k'th bit is set for n or not
bool IsKthBitset(int n, int k)
{
	return n & (1 << (k - 1));
}

// Function to toggle k'th bit of n
int ToggleKthBit(int n, int k)
{
	return n ^ (1 << (k - 1));
}

// returns position of the rightmost set bit of n
int RightmostSetBitPos(int n)
{
	// if number is odd, return 1
	if (n & 1)
		return 1;

	// unset rightmost bit and xor with number itself
	n = n ^ (n & (n - 1));

	// find the position of the only set bit in the result
	// we can directly return log2(n) + 1 from the function
	int pos = 0;
	while (n)
	{
		n = n >> 1;
		pos++;
	}
	return pos;
}

// bool IsPowerOf2(int n)
// {
// 	return !(n & (n - 1));
// }

bool IsPowerOf2(int n)
{
	return n && !(n & (n - 1));
}

// returns position of the only set bit of n
int setBitPos(int n)
{
	// unset rightmost bit and check if the number is non-zero
	if (n & (n - 1))
	{
		//"Wrong input";
		return 1;
	}

	return log2(n) + 1;
}

// find parity of number n
// Parity 1 - odd nums of 1
// Parity 0 - even nums of 1
unsigned int FindParity(unsigned int n)
{
	bool parity = false;

	// run till n is not zero
	while (n)
	{
		// invert the parity flag
		parity = !parity;

		// turn off rightmost set bit
		n = n & (n - 1);
	}

	return parity;
}

char BitUpperToLower(char c)
{
	return (c >= 'A' || c <= 'Z') ? c | ' ' : c;
}

char BitLowerToUpper(char c)
{
	return (c >= 'a' || c <= 'z') ? c & '_' : c;
}

char BitToUpper(char c)
{
	return c & '_';
}

char BitToLower(char c)
{
	return c | ' ';
}

char BitToggleCase(char c)
{
	return c ^ ' ';
}

//1 - 26
int AlphabetIndex(char a)
{
	return a & 31;
}

unsigned int bitAbs( int n )
{
	const int mask = n >> sizeof(int) * CHAR_BIT - 1;

	return (n + mask) ^ mask;
}

// return true if binary representation of n is a palindrome
bool BitIsBinaryPalindrome(unsigned int n)
{
	// rev stores reverse of binary representation of n
	unsigned reverse = 0;

	// do till all bits of n are processed
	unsigned int k = n;
	while (k)
	{
		// add rightmost bit to rev 
		reverse = (reverse << 1) | (k & 1);
		k = k >> 1;		// drop last bit
	}

	// return true if reverse(n) is same as n
	return n == reverse;
}

int BitMin(int x, int y)
{
	return y ^ ((x ^ y) & -(x < y));
}

int BitMax(int x, int y)
{
	return x ^ ((x ^ y) & -(x < y));
}

//Round this 32-bit value to the next highest power of 2
unsigned int BitRoundToPowerOf2(unsigned int n)
{

	if (n <= 1)
	{
		return 1;
	}

	float f = (float)n;

	const unsigned int t = 1 << ((*(unsigned int*)&f >> 23) - 0x7f);

	return t << (t < n);
}

unsigned int BitRoundToPowerOf2_1(unsigned int n)
{
	n--;
	n |= n >> 1;
	n |= n >> 2;
	n |= n >> 4;
	n |= n >> 8;
	n |= n >> 16;
	n++;

	return n;
}

bool HasAnyZeroByte(int n)
{
	return ~((((n & 0x7F7F7F7F) + 0x7F7F7F7F) | n) | 0x7F7F7F7F);
}

int BitDivide(int x, int y)
{
	assert(y != 0);

	// store sign of the result
	int sign = 1;
	if (x * y < 0)
		sign = -1;

	// convert both dividend and divisor to positive
	x = abs(x);
	y = abs(y);

	// initialize quotient by 0
	int quotient = 0;

	// loop till dividend x is more than the divisor y
	while (x >= y)
	{
		x = x - y;		// perform reduction on dividend
		quotient++;		// increase quotient by 1
	}

	//Remainder is x

	return sign * quotient;
}

bool IsPowerOf8(unsigned int n)
{
	// set bit is present at (0, 3, 6, ... ) position
	return n && !(n & (n - 1)) && !(n & 0xB6DB6DB6);
}

// Function to generate 
// binary numbers between 1 to N 
// using queue data structure
void GenerateBinaryNumbers(int n)
{
	// create an empty Queue and push 1 to it
	queue<string> q;
	q.push("1");

	// run n times
	int i = 1;
	while (i++ <= n)
	{
		// append 0 and 1 to the front element of the queue and
		// enqueue both strings
		q.push(q.front() + "0");
		q.push(q.front() + "1");

		// print the front element and dequeue from the queue
		cout << q.front() << ' ';
		q.pop();
	}
}

// Iterative solution to calculate 
// pow(x, n) using
// binary operators
int BitPower(int x, unsigned int n)
{
	// initialize result by 1
	int power = 1;

	while (n)
	{
		if (n & 1)
			power *= x;

		n = n >> 1;

		x = x * x;
	}

	return power;
}

int BitSquare(int num)
{
	if (num < 2)
	{
		return num;
	}

	num = abs(num);

	int i = num >> 1;

	return (num & 1) ? ((BitSquare(i) << 2) + (i << 2) + 1) : (BitSquare(i) << 2);
}

// compute power of two less than or equal to n
unsigned BitFloorToPowerOf2(unsigned int n)
{
	// do till only one bit is left
	while (n & n - 1)
		n = n & n - 1;	// unset rightmost bit

	// n is now a power of two (less than or equal to n)
	return n;
}






