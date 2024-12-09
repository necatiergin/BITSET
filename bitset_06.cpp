#include <iostream>
#include <bitset>

int main()
{
	std::bitset<8> bs{ 255 };
	std::cout << bs << '\n';
	bs.reset();
	std::cout << bs << '\n';
	bs = 255;
	bs.reset(5);
	std::cout << bs << '\n';
}
