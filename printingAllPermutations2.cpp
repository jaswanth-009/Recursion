#include<bits/stdc++.h>
using namespace std;

void permutations(int ind, vector<int> arr,int n){
	if(ind == n){
		for(int i:arr){
			cout << i << " ";
		}
		cout << "\n";
		return;
	}
	for(int i=ind;i<n;i++){
		swap(arr[i],arr[ind]);
		permutations(ind+1,arr,n);
	}
}

void swap(int e1, int e2){
	int temp = e1;
	e1 = e2;
	e2 = temp;
}

int main() {
	vector<int> arr = {1,2,3,4};
	permutations(0,arr,arr.size());
}
