#include<iostream>
#include<vector>
using namespace std;

void printCombinations(int index, int arr[], vector<int> ds, int r, int n) {

	if((index >= n) || (ds.size() == r)) {
		if(ds.size() == r) {
			for(int i:ds){
				cout << i << " ";
			}
			cout << "\n";
			return;
		}
	}

	for(int i = index; i<n; i++) {
		if((i>index) && (arr[i] == arr[i-1])){ continue; }
		ds.push_back(arr[i]);
		printCombinations(i+1,arr,ds,r,n);
		ds.pop_back();
	}
}

int main() {
	int arr[] = {1,2,1,2,3,4,3,4,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	int r = 2;
	vector<int> ds;
	printCombinations(0,arr,ds,r,n);
}

