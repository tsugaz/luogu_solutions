#include <iostream>

int main() {
	int n, max, temp3,temp1, temp2;
	max = 0;
	temp1 = -1;
	temp2 = -1;
	std::cin >> n;

	for(int i = 0; i < n; i++) {
		std::cin>>temp3;

		if(temp1 > n) {
			temp2++;
		}
		else{
			max = (max > temp2)? max : temp2;
			temp2 = 0;
		}
		temp1 = temp3;
	}

	std::cout<<max;
	return 0;
}
