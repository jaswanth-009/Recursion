#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void printf(vector<int> &ds, int arr[], int target, int ind, int n){
	if(ind>=n){
		if(accumulate(ds.begin(),ds.end(),0) == target){
			for(int i: ds){
				cout << i << " ";
			}
			cout << "\n";
		}
		return;
	}
	ds.push_back(arr[ind]);
	printf(ds, arr, target, ind+1, n);
	ds.pop_back();
	printf(ds, arr, target, ind+1, n);
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int size = 9;
	int target = 9;
	vector<int> ds;
	printf(ds, arr, target, 0, size);
}





