#include <iostream>
using namespace std;

int gcd(int a,int b){
    if (!b)return a;
    else return gcd(b,a%b);
}

int main(){
	ios::sync_with_stdio(false);
	int a, b, c, d, e;
	char f;
	cin>>a>>f>>b>>c>>f>>d;
	a*=c;
	b*=d;
	e = gcd(a, b);
	cout<<b/e<<" "<<a/e<<endl;
	return 0;
}
