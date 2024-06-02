//std::bitset class has  == and != functions but no relationl operators

#include <bitset>
#include <iostream>

int main()
{
	using namespace std;

	unsigned long x, y;

	cout << "enter two integers: ";
	cin >> x >> y;
	bitset<16> bx{ x }, by{ y };

	cout << bx << '\n' << by << '\n';

	cout << boolalpha;
	cout << (bx == by) << '\n';
	cout << (bx != by) << '\n';

	//bs < by; //error
}
