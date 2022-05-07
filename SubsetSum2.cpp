Given an integer array that may contain duplicates, return all possible subsets.
The solution must not contain duplicate subsets. The solution can be in any order






#include<bits/stdc++.h>
using namespace std;

void printf(int ind, int arr[], int n, vector<int> ds){
	for(int i:ds){
		cout << i << " ";
	}
	cout << "\n";

	for(int i=ind;i<n;i++){
		if(i != ind && arr[i]==arr[i-1]){
			continue;
		}
		ds.push_back(arr[i]);
		printf(i+1, arr,n,ds);
		ds.pop_back();
	}
}



int main() {
	int arr[] = {3,1,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n);
	vector<int> ds;
	printf(0,arr,n,ds);
}
