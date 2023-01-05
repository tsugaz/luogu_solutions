#include <iostream>

int main() {
	int h, r;
	std::cin>> h >> r;
	int ans = 20000 / (3.1415926535897932384626433832795 * r * r * h) + 1;

	std::cout << ans;
	return 0;
}
