#include <bitset>
#include <iostream>

int main()
{
	std::bitset<32> bs;

	std::cout << bs.to_string() << '\n';
	std::cout << bs.to_string('A') << '\n';
	bs = 1'234'765'861ull;
	std::cout << bs.to_string() << '\n';
	std::cout << bs.to_string('A') << '\n';
	std::cout << bs.to_string('A', 'B') << '\n';
}
