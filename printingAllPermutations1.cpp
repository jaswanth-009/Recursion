#include<bits/stdc++.h>
using namespace std;

void permutations(int arr[], vector<int> ds, int n, vector<int> map) {
	if(ds.size()==n){
		for(int i:ds){
			cout << i << " ";
		}
		cout << "\n";
		return;
	}

	for(int i=0;i<n;i++){
		if(map[i] == 0){
		ds.push_back(arr[i]);
		map[i] = 1;
		permutations(arr,ds,n, map);
		ds.pop_back();  
		map[i] = 0;
		}
	}
}

int main() {

	int arr[] = {1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> ds;
	vector<int> map;
	for(int i=0;i<n;i++){
		map.push_back(0);
	}
	permutations(arr,ds,n,map);
}
