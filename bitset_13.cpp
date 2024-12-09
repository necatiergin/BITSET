//std::bitset class has  == and != functions but no relationl operators

#include <bitset>
#include <iostream>

int main()
{
	unsigned long x, y;

	std::cout << "enter two integers: ";
	std::cin >> x >> y;
	std::bitset<16> bx{ x }, by{ y };

	std::cout << bx << '\n' << by << '\n';
	std::cout << std::boolalpha;
	std::cout << (bx == by) << '\n';
	std::cout << (bx != by) << '\n';

	//bs < by; //error
}
