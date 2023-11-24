#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	unsigned long uval;
	cout << "bir sayi girin: ";
	cin >> uval;

	bitset<16> bs(uval);

	if (bs.any())
		std::cout << "dogru\n";
	else
		std::cout << "yanlis\n";
		

	if (bs[5])
		std::cout << "dogru\n";
	else
		std::cout << "yanlis\n";

	
	if (bs.test(5))
		std::cout << "dogru\n";
	else
		std::cout << "yanlis\n";
}
