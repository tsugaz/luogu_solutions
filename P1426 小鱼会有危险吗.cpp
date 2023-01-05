#include <iostream>

int main(){
	double s, x, l, r, now, s2;
	now = 0;
	s2 = 6;
	std::cin >> s >> x;
	l = s - x;
	r = s + x;
	
	for(;;) {
		if(now > r) {
			std::cout << "n";
			return 0;
		}
		else {
			if((l <= now) && (now <= r)) {
				if((now + s2) > r) {
					std::cout << "n";
					return 0;
				}
				else {
					std::cout << "y";
					return 0;
				}
			}
			now += s2;
			s2 *= 0.98;
		}
	} 
	return 0;
}
