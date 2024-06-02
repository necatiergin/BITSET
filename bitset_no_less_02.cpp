//std::bitset class has no relational operators

#include <bitset>
#include <set>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	using namespace std;

	auto f = [](bitset<16> x, bitset<16> y) {return x.to_ulong() < y.to_ulong(); };
	set<bitset<16>, decltype(f)> myset;

	srand(static_cast<unsigned>(time(nullptr)));
	for (int i = 0; i < 10; ++i) {
		myset.emplace(rand());
	}

	for (auto bs : myset)
		cout << bs << '\n';
}
