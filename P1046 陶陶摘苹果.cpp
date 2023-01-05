#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[15],h,sum=0;
	for(int i=1;i<=10;i++){
		cin>>a[i];
	}
	cin>>h;
	h=h+30;
	for(int i=1;i<=10;i++){
		if(h>=a[i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
