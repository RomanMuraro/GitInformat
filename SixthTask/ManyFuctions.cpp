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

int main(){
	int b;
	cin>>b;
	b += 2;
	b = func(b);
	cout<<b;
return 0;}
