#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	unsigned long uval;
	cout << "bir tamsayi girin: ";
	cin >> uval;
	bitset<32> bs = uval;

	cout << bs[10].operator bool() << '\n';
	cout << bs[10] << '\n';
	bs[5] = bs[2];
	bs[4].flip();
	bs[7] = ~bs[2];
	bs[2] = true;
	bs[5] = 0;
}
