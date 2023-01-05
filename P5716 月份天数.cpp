#include <iostream>
using namespace std;

int main(){
	int y, m;
	cin>>y>>m;
	if(m!=2){
		switch(m){
			case 1:
				cout<<31<<endl;
				return 0;
			case 3:
				cout<<31<<endl;
				return 0;
			case 4:
				cout<<30<<endl;
				return 0;
			case 5:
				cout<<31<<endl;
				return 0;
			case 6:
				cout<<30<<endl;
				return 0;
			case 7:
				cout<<31<<endl;
				return 0;
			case 8:
				cout<<31<<endl;
				return 0;
			case 9:
				cout<<30<<endl;
				return 0;
			case 10:
				cout<<31<<endl;
				return 0;
			case 11:
				cout<<30<<endl;
				return 0;
			case 12:
				cout<<31<<endl;
				return 0;
		}
	} 
	else{
		if((y%4==0&&y%100!=0)||y%400==0){
			cout<<29<<endl;
		}
		else{
			cout<<28<<endl;
		}
	}
	return 0;
}
