#include <iostream>


int main() {
	int n, x, a, c, b; 
	c = 0;
	std::cin >> n >> x;

	for(int i = 1; i <= n; i++) {
		b = i;
		while(b > 0) {
			a = b % 10;
			b /= 10;
			if(a == x) {
				c++;
			}
		}
	}
	std::cout << c << std::endl;
	return 0;
}
