#include <iostream>

int main() {
	int a[15];
	int h,sum=0;
	
	for(int i = 1;i <= 10; i++) {
		std::cin >> a[i];
	}
	std::cin >> h;
	h=h+30;

	for(int i = 1;i <= 10; i++) {
		if(h >= a[i]){
			sum++;
		}
	}
	
	std::cout << sum;
	return 0;
}
