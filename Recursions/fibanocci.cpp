#include <iostream>
using namespace std;

int fib(int a){
	if(a == 1 || a==2){
		return 1;
	}

	
	return fib(a-1)+fib(a-2);
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<fib(n-1)+fib(n-2);
    return 0;
}




