//std::bitset sınıfının any, none ve all işlevleri

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	bitset<8> bs{ 255 };

	cout << boolalpha;

	cout << "is any bit set?    " << bs.any() << '\n';
	cout << "none of the bits set?     " << bs.none() << '\n';
	cout << "all of bits set?   " << bs.all() << '\n';
}
