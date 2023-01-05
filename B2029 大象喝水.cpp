#include <iostream>
using namespace std;

int main(){
	int h, r;
	cin>>h>>r;
	int ans = 20000/(3.1415926535897932384626433832795*r*r*h)+1;
	cout<<ans;
	return 0;
}
