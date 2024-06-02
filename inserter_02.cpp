#include <bitset>
#include <iostream>

int main()
{
	using namespace std;

	unsigned long long uval;

	cout << "enter an integer : ";
	cin >> uval;

	cout << bitset<64>{uval} << '\n';
}
