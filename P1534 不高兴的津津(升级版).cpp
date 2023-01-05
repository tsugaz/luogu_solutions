#include <iostream>

int main(){
	int n, a, b, s, y;
	s = 0;
	y = 0;
	std::cin >> n;

	for(int i = 0; i < n; i++) {
		std::cin >> a >> b;
		y = (y + a + b) - 8;
		s += y;
	}
	
	std::cout << s << std::endl;
	return 0;
}
