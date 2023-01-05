#include <iostream>

int main(){
	short x;
	unsigned long long a, n;
	a = 0;
	std::cin >> x >> n;

	for(int i = 0; i<n; i++) {
		if( (x == 6) || (x == 7) ) {
			if(x == 7){
				x = 1;
			}
			else if(x == 6){
				x++;
			}
		}
		else if( (1 <= x) && (x <= 5) ){
			a += 250;
			x++; 
		}
	}
	
	std::cout << a;
	return 0;
}
