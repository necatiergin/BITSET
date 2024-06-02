#include <bitset>
#include <iostream>
#include <thread>
#include <chrono>

int main()
{
	using namespace std;
	using namespace chrono;

	constexpr auto dur = 150ms;
	bitset<64> bs;

	for (;;) {
		bs = 1ull;
		while (bs != 0) {
			cout << bs << '\r';
			this_thread::sleep_for(dur);
			bs <<= 1;
		}
		bs = ~(~0ull >> 1);
		while (bs != 0) {
			cout << bs << '\r';
			this_thread::sleep_for(dur);
			bs >>= 1;
		}
	}
}
