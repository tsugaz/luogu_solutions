#include <iostream>
using namespace std;

int main(){
	double s, x, l, r, now = 0, s2=7;
	cin>>s>>x;
	l = s-x; r = s+x;
	for(;;){
		if(now>r){
			cout<<"n";
			return 0;
		}
		else{
			if(l<=now&&now<=r){
				if(now+s2>r){
					cout<<"n";
					return 0;
				}
				else{
					cout<<"y";
					return 0;
				}
			}
			now+=s2;
			s2*=0.98;
		}
	} 
	return 0;
}
