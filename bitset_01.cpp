#include <bitset>
#include <iostream>

int main()
{
	std::cout << sizeof(std::bitset<8>) << '\n';
	std::cout << sizeof(std::bitset<16>) << '\n';
	std::cout << sizeof(std::bitset<24>) << '\n';
	std::cout << sizeof(std::bitset<32>) << '\n';
	std::cout << sizeof(std::bitset<64>) << '\n';
}
