#include <bitset>
#include <iostream>
#include <thread>
#include <chrono>

int main()
{
	using namespace std;
	using namespace chrono;

	bitset<16> bs{ "1010101010101010" };

	while (true) {
		cout << bs;
		bs.flip(rand() % 16);
		this_thread::sleep_for(50ms);
		system("cls");
	}
}
