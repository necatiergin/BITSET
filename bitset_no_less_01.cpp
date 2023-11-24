#include <set>
#include <bitset>

int main()
{
	std::set<std::bitset<16>> myset;

	myset.emplace(345u); //gecersiz
	//iki bitset < karşılaştırma operatörü ile karşılaştırılamıyor
}
