#include <iostream>
#include <bitset>

int main()
{
	unsigned long uval;
	std::cout << "bir tamsayi girin: ";
	std::cin >> uval;
	std::bitset<32> bs = uval;

	std::cout << bs[10].operator bool() << '\n';
	std::cout << bs[10] << '\n';
	bs[5] = bs[2];
	bs[4].flip();
	bs[7] = ~bs[2];
	bs[2] = true;
	bs[5] = 0;
}
