#include <iostream>
#include <bitset>

int main()
{
	std::bitset<16> bs;

	std::cout << bs << '\n';
	bs.set();
	std::cout << bs << '\n';
	bs = 0;
	std::cout << bs << '\n';
	bs.set(5);
	std::cout << bs << '\n';
	bs.set(5, false);
	std::cout << bs << '\n';
	bs.set(5, true);
	std::cout << bs << '\n';
}
