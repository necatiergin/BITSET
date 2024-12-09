#include <bitset>
#include <iostream>
#include <thread>
#include <chrono>

int main()
{
	std::bitset<16> bs{ "1010101010101010" };

	while (true) {
		std::cout << bs;
		bs.flip(rand() % 16);
		std::this_thread::sleep_for(std::chrono::milliseconds{50});
		std::system("cls");
	}
}
