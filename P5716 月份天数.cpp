#include <iostream>

int main(){
	int y, m;
	std::cin >> y >> m;
	if(m != 2) {
		switch(m) {
			case 1:
				std::cout << 31 << std::endl;
				return 0;
			case 3:
				std::cout << 31 << std::endl;
				return 0;
			case 4:
				std::cout << 30 << std::endl;
				return 0;
			case 5:
				std::cout << 31 << std::endl;
				return 0;
			case 6:
				std::cout << 30 << std::endl;
				return 0;
			case 7:
				std::cout << 31 << std::endl;
				return 0;
			case 8:
				std::cout << 31 << std::endl;
				return 0;
			case 9:
				std::cout << 30 << std::endl;
				return 0;
			case 10:
				std::cout << 31 << std::endl;
				return 0;
			case 11:
				std::cout << 30 << std::endl;
				return 0;
			case 12:
				std::cout << 31 << std::endl;
				return 0;
		}
	} 
	else{
		if((((y % 4) == 0 ) && ((y % 100) != 0)) || ((y % 400) == 0)){
			std::cout << 29 << std::endl;
		}
		else{
			std::cout << 28 << std::endl;
		}
	}
	return 0;
}
