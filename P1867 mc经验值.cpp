#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long n, xp0 = 0, xp, xpl = 0;
	double h0 = 0, h1;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>h1>>xp;
		h0-=h1;
		xp0+=xp;
		while(xp0>=pow(2, xpl)){
			xp0-=pow(2, xpl);
			xpl++;
			cout<<xpl<<" "<<xp<<pow(2, xpl)<<endl;
		}
		cout<<endl;
	} 
	cout<<xpl<<" "<<xp0<<endl;
	return 0;
}
