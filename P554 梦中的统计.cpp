#include <iostream>
using namespace std;

int main(){
	int m, n, temp_1, c[10]={0};
	cin>>m>>n;
	for(int i = m; i <=n; i++){
		temp_1 = i;
		while(temp_1>0){
			c[temp_1%10]++;
			temp_1/=10;
		}
	}
	for(int i = 0; i<10; i++){
		cout<<c[i];
		cout<<" ";
	} 
	return 0;
}
