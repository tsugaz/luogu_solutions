#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
	int a[3];
	bool n, r, ac, o, i, e;
	std::cin>>a[0]>>a[1]>>a[2];

	std::sort(a, a + 3);
	n = !((a[0] + a[1]) > a[2]);
	r = ((pow(a[0], 2) + pow(a[1], 2)) == pow(a[2], 2));
	ac = ((pow(a[0], 2) + pow(a[1], 2)) > pow(a[2], 2));
	o = ((pow(a[0], 2) + pow(a[1], 2)) < pow(a[2], 2));
	i = a[0] == a[1];
	e = (a[0] == a[1]) && (a[0] == a[2]);
	if(n) {
		std::cout << "Not triangle" << std::endl;
		return 0;
	}
	if(r) {
		std::cout << "Right triangle" << std::endl;
	}
	if(ac){
		std::cout << "Acute triangle" << std::endl;
	}
	if(o) {
		std::cout << "Obtuse triangle" << std::endl;
	}
	if(i) {
		std::cout << "Isosceles triangle" << std::endl;
	}
	if(e) {
		std::cout << "Equilateral triangle" << std::endl;
	}
	return 0;
}
