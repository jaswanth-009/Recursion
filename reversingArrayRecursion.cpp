#include<iostream>
using namespace std;

void swap(int l, int r, int arr[]){
	if(l>r){
		return;
	}
	int temp;
	temp = arr[r];
	arr[r] = arr[l];
	arr[l] = temp;
	swap(l+1,r-1,arr);
}

void swap2(int l, int arr[], int n){
	if(l>=n/2){
		return;
	}
	int temp;
	temp = arr[l];
	arr[l] = arr[n-l-1];
	arr[n-l-1] = temp;
	swap2(l+1, arr, n);
}

int main(){
	int arr[6] = {1,2,3,4,5,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	swap(0,5,arr);
	for(int i: arr){
		cout << i << " ";
	}
	cout << "\n";

	swap2(0,arr, size);
	for(int i: arr){
		cout << i << " ";
	}

}

