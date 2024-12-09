#include <bitset>
#include <iostream>

int main()
{
	unsigned long long uval;

	std::cout << "enter an integer : ";
	std::cin >> uval;

	std::cout << bitset<64>{uval} << '\n';
}
