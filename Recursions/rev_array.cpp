#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rev_arr(int *arr, int low, int high){
	if(low>=high){
		return;
	}
	
	swap(arr[low++],arr[high--]);
	rev_arr(arr,low,high);
}

int main(){
	int arr[]={1,2,3,4,5,6,7};
	rev_arr(arr,0,6);
	for(int i =0; i<=6; i++)
		cout<<arr[i];
	return 0;
}
