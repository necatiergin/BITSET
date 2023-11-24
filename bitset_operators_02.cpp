#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	unsigned long x, y;
	cout << "iki tamsayi girin: ";
	cin >> x >> y;
	bitset<32> bx{ x }, by{ y };

	cout << "         " << bx << "\n";
	cout << "         " << by << "\n";
	cout << "ve     = " << (bx & by) << "\n";
	cout << "veya   = " << (bx | by) << "\n";
	cout << "exor   = " << (bx ^ by) << "\n";
}
