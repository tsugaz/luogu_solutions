#include <iostream>
using namespace std;

int main(){
	double m, h, bmi;
	cin>>m>>h;
	bmi = m/(h*h);
	if(bmi<18.5){
		cout<<"Underweight"<<endl;
	}
	else if(bmi>=18.5&&bmi<24){
		cout<<"Normal"<<endl;
	} 
	else{
		cout<<bmi<<endl<<"Overweight"<<endl;
	}
	return 0;
}
