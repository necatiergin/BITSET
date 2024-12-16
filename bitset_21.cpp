#include <bitset>
#include <iostream>
#include <string>

int main()
{
    std::string strxy = "XYXYXYXY";
    std::bitset<8> bs(strxy, 0, strxy.size(), 'X', 'Y');   

    std::cout << bs << '\n';
}
