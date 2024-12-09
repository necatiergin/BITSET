#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	unsigned long uval;
	cout << "enter an integer: ";
	cin >> uval;

	bitset<16> bs(uval);
	std::cout << bs << '\n';

	boolalpha(std::cout);
	std::cout << "bs.any()    = " << bs.any() << '\n';
	std::cout << "bs[5]       = " << bs[5] << '\n';
	std::cout << "bs.test(5)  = " << bs.test(5) << '\n';
}
