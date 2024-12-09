// std::bitset<> sınıfının count işleviyle set edilmiş bitleri saydırabiliriz.

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;
	unsigned long uval;
	cout << "enter an integer: ";
	cin >> uval;
	bitset<32> bs = uval;
	cout << bs << '\n';
	cout << "size = " << bs.size() << '\n';
	cout << "set bit count = " << bs.count() << '\n';
}
