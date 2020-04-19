#include <iostream>
#include <bitset>

#include "BitHacks.h"

using namespace std;







int main()
{

	cout << " next power of 2 of 748 is " << RoundToPowerOf2(748) << endl;

	cout << " Add one to 87 " << BitAddOne(87) << endl; 
	
	cout << " -9 and 7 are opposite " << IsOppositeSign( -9, 7) << endl;

	cout << " 27 binary palindrome " << IsBinaryPalindrome(27) << "   " << bitset<8>(27) << endl;

	cout << "to upper c " << BitToUpper('c') << endl;

	cout << "to upper T " << BitToLower('T') << endl;

	cout << "toggle case T " << BitToggleCase('T') << endl;

	system("pause");

	return 0;
}