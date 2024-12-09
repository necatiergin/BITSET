#include <iostream>
#include <bitset>

int main()
{
	unsigned long x, y;
	std::cout << "enter two integers : ";
	std::cin >> x >> y;
	std::bitset<32> bx{ x }, by{ y };

	std::cout << "         " << bx << '\n';
	std::cout << "         " << by << '\n';
	std::cout << "and     = " << (bx & by) << '\n';
	std::cout << "or      = " << (bx | by) << '\n';
	std::cout << "exor    = " << (bx ^ by) << '\n';
}
