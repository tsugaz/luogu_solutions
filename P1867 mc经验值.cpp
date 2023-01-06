#include <iostream>
#include <cmath>

int main(){
	long long n, xp0, xp, xpl;
	double h0, h1;
	xp0 = 0;
	xpl = 0;
	h0 = 0;

	std::cin >> n;
	for(int i = 0; i < n; i++) {
		std::cin >> h1 >> xp;
		h0 -= h1;
		xp0 += xp;
		while(xp0 >= pow(2, xpl)) {
			xp0 -= pow(2, xpl);
			xpl++;
			std::cout << xpl << " " << xp << pow(2, xpl) << std::endl;
		}
		std::cout << std::endl;
	} 
	std::cout << xpl << " " << xp0 << std::endl;
	return 0;
}
