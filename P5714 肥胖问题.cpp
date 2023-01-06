#include <iostream>

int main() {
	double m, h, bmi;
	std::cin >> m >> h;
	bmi = m / (h * h);
	if(bmi < 18.5) {
		std::cout << "Underweight" << std::endl;
	}
	else if((bmi >= 18.5) && (bmi < 24)) {
		std::cout << "Normal" << std::endl;
	} 
	else{
		std::cout << bmi << std::endl << "Overweight" << std::endl;
	}
	return 0;
}
