#include <iostream>
#include <bitset>

#include "BitHacks.h"

using namespace std;







int main()
{

	cout << " next power of 2 of 748 is " << BitRoundToPowerOf2(748) << endl;
	cout << " next power of 2 of 748 is " << BitRoundToPowerOf2_1(748) << endl;

	cout << " Add one to 87 " << BitAddOne(87) << endl; 
	
	cout << " -9 and 7 are opposite " << BitIsOppositeSign( -9, 7) << endl;

	cout << " 27 binary palindrome " << BitIsBinaryPalindrome(27) << "   " << bitset<8>(27) << endl;

	cout << "to upper c " << BitToUpper('c') << endl;

	cout << "to upper T " << BitToLower('T') << endl;

	cout << "toggle case T " << BitToggleCase('T') << endl;

	cout << "512*8 is power of 8 " << IsPowerOf8(512*8) << endl;

	cout << " square of 64 " << BitSquare(64) << endl;


	system("pause");

	return 0;
}




