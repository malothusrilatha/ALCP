#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cout<<"Enter number of elements:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cout<<"Enter target value:";
	cin>>target;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==target){
				cout<<"Indices:"<<i<<" "<<j;
			}
		}
	}
	return 0;
}
