//bitset sınıfının inserter işlevi var. Bir çıkış akımına verebiliriz.

#include <bitset>
#include <iostream>

using namespace std;

int main()
{
	bitset<32> bs{ 234567ull };

	cout << bs << "\n";
}
