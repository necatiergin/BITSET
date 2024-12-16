#include <set>
#include <bitset>

int main()
{
	std::set<std::bitset<16>> myset;

	myset.emplace(345u); //invalid
	//std::bitset has no relational operators 
}
