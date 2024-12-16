#include <iostream>
#include <bitset>

int main()
{
	unsigned long uval;
	std::cout << "enter an integer: ";
	std::cin >> uval;

	std::bitset<16> bs(uval);
	std::cout << bs << '\n';

	boolalpha(std::cout);
	std::cout << "bs.any()    = " << bs.any() << '\n';
	std::cout << "bs[5]       = " << bs[5] << '\n';
	std::cout << "bs.test(5)  = " << bs.test(5) << '\n';
}
