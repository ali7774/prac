#include<iostream>
using namespace std;
float circumference(float &r){
	return(2*3.14*r);
}
float area(float &r){
	return(3.14*r*r);
}
int main(){
	float a,c,r;
	cout<<"enter radius:"<<endl;
	cin>>r;
	c=circumference(r);
	a=area(r);
	cout<<"circumference is:"<<c<<endl;
	cout<<"area is:"<<a<<endl;
}
hjjhbjhbhjbjhbhjbjbhjb
