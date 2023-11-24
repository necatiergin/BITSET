//bitset sınıfının == ve != fonksiyonları var ancak diğer karşılaştırma fonksiyonları yok

#include <bitset>
#include <iostream>

int main()
{
	using namespace std;

	unsigned long x, y;

	cout << "iki tamsayi girin: ";
	cin >> x >> y;
	bitset<16> bx{ x }, by{ y };

	cout << bx << '\n' << by << '\n';

	cout << boolalpha;
	cout << (bx == by) << '\n';
	cout << (bx != by) << '\n';

	//bs < by; //yok boyle bir operator
}
