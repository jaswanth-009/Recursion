#include<bits/stdc++.h>
using namespace std;

void printf(int ind, int n, vector<int> ds, int arr[], int target){
	if(ind>=n){
		if(target == 0){
			for(int i: ds){
				cout << i << " ";
			}
			cout << "\n";
		}
		return;
	}
	if(arr[ind] <= target){
		ds.push_back(arr[ind]);
		printf(ind, n, ds, arr, target-arr[ind]);
		ds.pop_back();
	}
	printf(ind+1, n ,ds, arr, target);
}

int main() {
	int arr[] = {2,3,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> ds;
	int target = 8;
	printf(0,n,ds,arr,target);
}
