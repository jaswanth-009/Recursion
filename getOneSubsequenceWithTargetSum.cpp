#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool printf(vector<int> &ds, int arr[], int target, int ind, int n){
	if(ind>=n){
		if(accumulate(ds.begin(),ds.end(),0) == target){
			for(int i: ds){
				cout << i << " ";
			}
			cout << "\n";
			return true;
		}
		return false;
		
	} 

	ds.push_back(arr[ind]);

	if(printf(ds, arr, target, ind+1, n) == true){
		return true;
	}

	ds.pop_back();

	if(printf(ds, arr, target, ind+1, n) == true){
		return true;
	}

	return false;
}



int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int size = 9;
	int target = 9;
	vector<int> ds;
	printf(ds, arr, target, 0, size);
}

