#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(a%b==0){
		return b;
	}
	return gcd(b, a%b);
}

int main(){
	int a, b, c, d, e, f;
	cin>>a>>b>>c;
	d = min(min(a, b), c);
	e = max(max(a, b), c);
	f = gcd(d, e);
	cout<<d/f<<"/"<<e/f<<endl;
	return 0;
}
