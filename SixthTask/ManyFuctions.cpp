#include <iostream>
#include <cmath>

using namespace std;
int func(int a){
     int cd = 1;
	for(int i=1;i<=a;i++){
		cd = cd*i;
	}
return cd;}

int sqrt(int a){
	a = pow(a,2);
return a;}	

int main(){
	int b;
	int c;
	cin>>b;

	c = b;
	b = func(b);
	c = sqrt(c);
	cout<<" Factorial = "<<b<<", Square =  "<<c;
return 0;}
