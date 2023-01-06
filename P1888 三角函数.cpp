#include <iostream>


int gcd(int a, int b) {
	if((a % b) == 0){
		return b;
	}
	return gcd(b, (a % b));
}

int main() {
	int a, b, c, d, e, f;
	std::cin >> a >> b >> c;

	d = std::min(std::min(a, b), c);
	e = std::max(std::max(a, b), c);
	f = gcd(d, e);
	
	std::cout << (d / f) <<"/" <<(e / f) << std::endl;
	return 0;
}
