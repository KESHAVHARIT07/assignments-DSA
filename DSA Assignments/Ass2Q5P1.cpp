#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of elements : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array : ";
	for(int k=0;k<n;k++){
		cin>>arr[k];
	}
	for(int i =0;i<n;i++){
		cout<<endl;
		for(int j=0;j<n;j++){
			if(i==j){
				cout<<arr[i]<<" " ;
			}
			else{
				cout<<"0 ";
			}
		}
	}
	return 0;
}