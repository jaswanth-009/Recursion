#include<bits/stdc++.h>
using namespace std;


void subsetSum(int ind, int n, int arr[], vector<int> ds, vector<int> &ans, int sum){
	if(ind>=n){
		ans.push_back(sum);
		return;
	}
	ds.push_back(arr[ind]);
	subsetSum(ind+1,n,arr,ds,ans,sum+arr[ind]);
	ds.pop_back();
	subsetSum(ind+1,n,arr,ds,ans,sum);
}



int main() {
	int arr[] = {3,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n);
	vector<int> ans(0,pow(2,n));
	vector<int> ds;
	subsetSum(0,n,arr,ds,ans,0);
	sort(ans.begin(), ans.end());
	for(int i:ans){
		cout << i << " ";
	}
}
