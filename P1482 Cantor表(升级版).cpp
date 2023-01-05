#include <iostream>

int gcd(int a, int b) {
    if (!b) {
		return a;
	}
    else {
		return gcd(b, a % b);
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	int a, b, c, d, e;
	char f;
	std::cin >> a >> f >> b >> c >> f >> d;
	
	a *= c;
	b *= d;
	e = gcd(a, b);

	std::cout << (b / e) << " " << (a / e) << std::endl;
	return 0;
}
