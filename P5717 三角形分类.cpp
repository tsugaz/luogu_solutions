#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int a[3];
	bool n, r, ac, o, i, e;
	cin>>a[0]>>a[1]>>a[2];
	sort(a, a+3);
	n = !(a[0]+a[1]>a[2]);
	r = (pow(a[0], 2)+pow(a[1], 2)==pow(a[2], 2));
	ac = (pow(a[0], 2)+pow(a[1], 2)>pow(a[2], 2));
	o = (pow(a[0], 2)+pow(a[1], 2)<pow(a[2], 2));
	i = a[0]==a[1];
	e = a[0]==a[1]&&a[0]==a[2];
	if(n){
		cout<<"Not triangle"<<endl;
		return 0;
	}
	if(r){
		cout<<"Right triangle"<<endl;
	}
	if(ac){
		cout<<"Acute triangle"<<endl;
	}
	if(o){
		cout<<"Obtuse triangle"<<endl;
	}
	if(i){
		cout<<"Isosceles triangle"<<endl;
	}
	if(e){
		cout<<"Equilateral triangle"<<endl;
	}
	return 0;
}
