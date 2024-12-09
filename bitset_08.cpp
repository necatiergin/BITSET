//any, none and all member functions

#include <iostream>
#include <bitset>

int main()
{
	std::bitset<8> bs{ 255 };

	boolalpha(std::cout);

	std::cout << "is any bit set?    " << bs.any() << '\n';
	std::cout << "none of the bits set?     " << bs.none() << '\n';
	std::cout << "all of bits set?   " << bs.all() << '\n';
}
