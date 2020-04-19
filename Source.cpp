#include <iostream>
#include <bitset>

#include "BitHacks.h"

using namespace std;
using namespace BitHacks;





int main()
{

	cout << " previous power of 2 of 748 is " << BitFloorToPowerOf2(748) << endl;
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

	cout << "hammingDistance between 1001 and 1110 64 " << BitHammingDistance(9, 14) << endl;

	cout << " A : " << BitToBinary('A') << endl;
	cout << " a : " << BitToBinary('a') << endl;
	cout << " space : " << BitToBinary(' ') << endl;

	cout << " Flip 7 : " << BitToBinary( BitFlip(7) ) << endl;

	cout << " Bit 4 of 45 is " << BitAt(45, 4) << "  "<< BitToBinary(45) << endl;

	system("pause");

	return 0;
}




