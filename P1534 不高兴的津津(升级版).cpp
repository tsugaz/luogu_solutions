#include <iostream>
using namespace std;
int n, a, b, s = 0, y = 0;
int main(){
	cin>>n;
	for(int i =0; i<n; i++){
		cin>>a>>b;
		y = (y+a+b)-8;
		s+=y;
	}
	cout<<s<<endl;
	return 0;
}
