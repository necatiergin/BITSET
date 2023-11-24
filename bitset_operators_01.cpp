#include <bitset>
#include <iostream>

int main()
{
	using namespace std;

	bitset<16> bs{ 65535 };
	cout << bs << '\n';
	bs >>= 5;
	cout << bs << '\n';
	bs = 65535;
	cout << (bs << 2) << '\n';
	cout << (bs >> 3) << '\n';
}
