#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool pal(string s, int l, int r){
	
	
	if(s[l] != s[r]){
		return false;
	}
	
	else if (l >= r){
		return true;
	}
	
	if(pal(s,l+1,r-1)){
		return true;
	}
	
	else{
		return false;
	}	
}

int main(){
	string s;
	cin>>s;
	cout<<pal(s,0,s.length()-1);
//cout<<"hello there";
	
	
}
