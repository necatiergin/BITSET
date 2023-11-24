#include <bitset>
#include <iostream>

int main()
{
	std::bitset<32>bs{ "101010100101010100101" };
	std::cout << bs.to_ullong() << "\n";
}
