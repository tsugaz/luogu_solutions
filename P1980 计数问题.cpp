#include <iostream>
using namespace std;
int n, x, a, c = 0, b; 
int main(){
	cin>>n>>x;
	for(int i =1; i<=n; i++){
		b = i;
		while(b>0){
			a = b%10;
			b/=10;
			if(a==x){
				c++;
			}
		}
	}
	cout<<c<<endl;
	return 0;
}
