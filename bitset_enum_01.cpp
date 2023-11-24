#include <bitset>
#include <iostream>

enum Color {
	White,
	Gray,
	Yellow,
	Red,
	Blue,
	Purple,
	Brown,
	Black,
	NoOfColors
};

int main()
{
	std::bitset<NoOfColors> myset;

	myset[Yellow] = true;
	myset[Brown] = true;
	myset[Black] = true;

	myset.reset(Brown);
	std::cout << myset;
}
