#include <iostream>
using namespace std;

int main() {
	int n, max = 0, temp3,temp1 = -1, temp2 = -1;
	cin>>n;
	for(int i = 0; i<n; i++) {
		cin>>temp3;
		if(temp1>n) {
			temp2++;
		}
		else{
			max = max>temp2? max:temp2;
			temp2 = 0;
		}
		temp1 = temp3;
	}
	cout<<max;
	return 0;
}
