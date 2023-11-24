//bir tam sayıyı 2'lik sayı sisteminde yazdırmanın pratik yolu

#include <bitset>
#include <iostream>

int main()
{
	using namespace std;
	
	unsigned long long uval;

	cout << "tamsayi degerini girin: ";
	cin >> uval;

	cout << bitset<64>{uval} << "\n";
}
