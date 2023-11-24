#include <bitset>
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string str{ "11111111111111111" };

	bitset<32> bs1{ str };
	cout << bs1 << '\n';
	bitset<32> bs2{ str, 8 };
	cout << bs1 << '\n';
	bitset<32> bs3{ str, 8, 3 };
	cout << bs3 << '\n';
}
