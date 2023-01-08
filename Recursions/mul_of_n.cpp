#include<iostream>
using namespace std;

int mul_of_n(int a){
	
	if(a == 1){
		return 1;
	}
	
	return a*mul_of_n(a-1);
	
}

int main(){
	int a;
	cin>>a;
	cout<<a*mul_of_n(a-1);
}
