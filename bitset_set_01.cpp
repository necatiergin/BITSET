#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	bitset<16> bs;
	cout << bs << "\n";
	bs.set();
	cout << bs << "\n";
	bs = 0;
	cout << bs << "\n";
	bs.set(5);
	cout << bs << "\n";
	bs.set(5, false);
	cout << bs << "\n";
	bs.set(5, true);
	cout << bs << "\n";
}
