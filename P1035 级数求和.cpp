#include <iostream>

int main() {
	int a;
	double s;
	s = 0;

	std::cin >> a;

	for(double b = 1; ; b++) {

		s+=1/b;

		if(s>a) {
			std::cout << (int)b;
			return 0;
		}
	}
	return 0;
}
