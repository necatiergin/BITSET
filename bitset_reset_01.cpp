#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	bitset<8> bs{255};
	cout << bs << "\n";
	bs.reset();
	cout << bs << "\n";
	bs = 255;
	bs.reset(5);
	cout << bs << "\n";
}
