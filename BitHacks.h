#pragma once
 
 
bool IsOdd( int n )
{
	return n & 1;
}

bool isOfOppositeSign(int x, int y)
{
	return ((x ^ y) < 0);
}

int AddOne(int n)
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
int turnOnKthBit(int n, int k)
{
	return n | (1 << (k - 1));
}

// Function to turn off k'th bit in n
int turnOffKthBit(int n, int k)
{
	return n & ~(1 << (k - 1));
}

// Function to check if k'th bit is set for n or not
bool isKthBitset(int n, int k)
{
	return n & (1 << (k - 1));
}

// Function to toggle k'th bit of n
int toggleKthBit(int n, int k)
{
	return n ^ (1 << (k - 1));
}

// returns position of the rightmost set bit of n
int rightmostSetBitPos(int n)
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

bool IsPowerOf2(int n)
{
	return !(n & (n - 1));
}

// returns position of the only set bit of n
int setBitPos(int n)
{
	// unset rightmost bit and check if the number is non-zero
	if (n & (n - 1))
	{
		cout << "Wrong input";
		return 1;
	}

	return log2(n) + 1;
}

// find parity of number n
// Parity 1 - odd nums of 1
// Parity 0 - even nums of 1
unsigned int findParity(unsigned int n)
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

char UpperToLower(char c)
{
	return (c >= 'A' || c <= 'Z') ? c | ' ' : c;
}

char LowerToUpper(char c)
{
	return (c >= 'a' || c <= 'z') ? c & '_' : c;
}


char ToUpper(char c)
{
	return c & '_';
}

char ToLower(char c)
{
	return c | ' ';
}

char ToggleCase(char c)
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
bool isBinaryPalindrome(unsigned int n)
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

int bitMin(int x, int y)
{
	return y ^ ((x ^ y) & -(x < y));
}

int bitMax(int x, int y)
{
	return x ^ ((x ^ y) & -(x < y));
}

//Round this 32-bit value to the next highest power of 2
unsigned int RoundToPowerOf2(int n)
{

	if (n <= 1)
	{
		return 1;
	}

	float f = (float)n;

	const unsigned int t = 1 << ((*(unsigned int*)&f >> 23) - 0x7f);

	return t << (t < n);
}

unsigned int RoundToPowerOf2(int n)
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

bool hasAnyZeroByte(int n)
{
	return ~((((v & 0x7F7F7F7F) + 0x7F7F7F7F) | v) | 0x7F7F7F7F);
}

bool IsPowerOf2(int n)
{
	return n && !(n & (n - 1));
}














