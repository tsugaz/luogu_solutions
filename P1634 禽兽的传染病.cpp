#include <iostream>

int main() {
	int x, n, ans;
	std::cin >> x >> n;
	ans = 1;
	
	for(int i = 0; i < n; i++) {
		ans += ans * x;
	}
	
	std::cout << ans;
	
	return 0;
}
