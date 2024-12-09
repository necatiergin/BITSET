//std::bitset class has no relational operators

#include <bitset>
#include <set>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	auto f = [](std::bitset<16> x, std::bitset<16> y) {return x.to_ulong() < y.to_ulong(); };
	std::set<std::bitset<16>, decltype(f)> myset;

	std::srand(static_cast<unsigned>(std::time(nullptr)));

	for (int i = 0; i < 10; ++i) {
		myset.emplace(rand());
	}

	for (auto bs : myset)
		std::cout << bs << '\n';
}
