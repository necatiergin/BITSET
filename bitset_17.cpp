#include <bitset>
#include <iostream>
#include <thread>
#include <chrono>

int main()
{
	using namespace std::literals;

	constexpr auto dur = 150ms;
	std::bitset<64> bs;

	for (;;) {
		bs = 1ull;
		while (bs != 0) {
			std::cout << bs << '\r';
			std::this_thread::sleep_for(dur);
			bs <<= 1;
		}
		bs = ~(~0ull >> 1);
		while (bs != 0) {
			std::cout << bs << '\r';
			std::this_thread::sleep_for(dur);
			bs >>= 1;
		}
	}
}
