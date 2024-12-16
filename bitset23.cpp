//quoted from cppreference.com

#include <bitset>
#include <iostream>
#include <limits>

int main()
{
    std::bitset<std::numeric_limits<unsigned long long>::digits> b
    (
        0x123456789abcdef0LL
    );

    std::cout << b << "  " << std::hex << b.to_ullong() << '\n';
    b.flip();
    std::cout << b << "  " << b.to_ullong() << '\n';

    std::bitset<std::numeric_limits<unsigned long long>::digits + 1> q{ 0 };
    try
    {
        (~q).to_ullong(); // throws
    }
    catch (const std::overflow_error& ex)
    {
        std::cout << "ex: " << ex.what() << '\n';
    }
}
