#include <iostream>

using namespace std;
int func(int a){
     int cd = 1;
	for(int i=3;i<=a;i++){
		cd = cd*i;
	}
return cd;}

int main(){
	int b;
	cin>>b;
	b = func(b);
	cout<<b;
return 0;}
