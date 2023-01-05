#include <iostream>
using namespace std;

int main(){
	int a;
	double s;
	s = 0;
	cin>>a;
	for(double b = 1; ;b++){
		s+=1/b;
		if(s>a){
			cout<<(int)b;
			return 0;
		}
	}
	return 0;
}
