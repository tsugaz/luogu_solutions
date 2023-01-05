#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int ans = 0;
	string a;
	getline(cin,a);
	for(int i = 0; i<a.size(); i++){
		switch(a[i]){
			case 'a':
				ans++;
				break;
			case 'b':
				ans+=2;
				break;
			case 'c':
				ans+=3;
				break;
			case 'd':
				ans++;
				break;
			case 'e':
				ans+=2;
				break;
			case 'f':
				ans+=3;
				break;
			case 'g':
				ans++;
				break;
			case 'h':
				ans+=2;
				break;
			case 'i':
				ans+=3;
				break;
			case 'j':
				ans++;
				break;
			case 'k':
				ans+=2;
				break;
			case 'l':
				ans+=3;
				break;
			case 'm':
				ans++;
				break;
			case 'n':
				ans+=2;
				break;
			case 'o':
				ans+=3;
				break;
			case 'p':
				ans++;
				break;
			case 'q':
				ans+=2;
				break;
			case 'r':
				ans+=3;
				break;
			case 's':
				ans+=4;
				break;
			case 't':
				ans++;
				break;
			case 'u':
				ans+=2;
				break;
			case 'v':
				ans+=3;
				break;
			case 'w':
				ans++;
				break;
			case 'x':
				ans+=2;
				break;
			case 'y':
				ans+=3;
				break;
			case 'z':
				ans+=4;
				break;
			case ' ': 
				ans++;
				break; 
			}
	}
	cout<<ans<<endl;
	return 0;
}
