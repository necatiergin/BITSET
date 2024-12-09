#include <bitset>
#include <iostream>
#include <string>

int main()
{
	std::string str{ "11111111111111111" };

	std::bitset<32> bs1{ str };
	std::cout << bs1 << '\n';
	std::bitset<32> bs2{ str, 8 };
	std::cout << bs2 << '\n';
	std::bitset<32> bs3{ str, 8, 3 };
	std::cout << bs3 << '\n';
}
