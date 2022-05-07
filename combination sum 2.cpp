#include<bits/stdc++.h>
using namespace std;

void printf(int ind, int arr[], int n, int target, vector<int> ds){
	if(target == 0){
		for(int i: ds){
			cout << i << " ";
		}
		cout << "\n";
		return;

	}
		
	for(int i = ind;i<n;i++){
		if(i>ind && arr[i] == arr[i-1]) continue;
		if(arr[i]>target) break;
		ds.push_back(arr[i]);
		printf(i+1, arr,n,target-arr[i],ds);
		ds.pop_back();
	}

}


int main() {
	int arr[] = {1,1,1,2,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n);
	int target = 4;
	vector<int> ds;
	printf(0,arr,n,target,ds);
}
