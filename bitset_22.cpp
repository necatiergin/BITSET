// quoted from cppreference.com

#include <bitset>
#include <iostream>
#include <stdexcept>
 
int main()
{
    for (unsigned long i = 0; i < 10; ++i)
    {
        std::bitset<5> b(i);
        std::bitset<5> b_inverted = ~b;
        std::cout << i << '\t' << b << '\t' << b_inverted << '\t'
                  << b_inverted.to_ulong() << '\n';
    }
 
    std::cout << std::bitset<32>().to_string('-') << '\n';
 
    try
    {
        std::bitset<128> x(42);
        std::cout << x.to_ulong() << '\n';
        x.flip();
        std::cout << x.to_ulong() << '\n'; // throws
    }
    catch (const std::overflow_error& ex)
    {
        std::cout << "ex: " << ex.what() << '\n';
    }
}
