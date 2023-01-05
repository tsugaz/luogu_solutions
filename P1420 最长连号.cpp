#include <iostream>
using namespace std;
int a[10001];
int main(){
	int n, b, c;
    b = 1; c  = 1;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	for(int i = 0; i<n; i++){
		if(a[i+1] == a[i]+1){
			for(int j = i; j<n; j++){
				if(a[j+1]==a[j]+1){
					b++;
				}
				else{
					c = b>c? b:c;
					b = 1;
				}
			}
		}
	}
	cout<<c;
	return 0;
}
