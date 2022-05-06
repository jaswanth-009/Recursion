#include<iostream>
#include<vector>
using namespace std;

 void printf(int ind, vector<int> ds, int arr[], int n){
 	if(ind>=n){
 		for(int i:ds){
 			cout << i << " "; 
 		}
 		cout << "\n";
 		return;
 	}
 	ds.push_back(arr[ind]);
 	printf(ind+1,ds,arr,n);
 	ds.pop_back();
 	printf(ind+1, ds, arr, n);

 }

int main(){
	int arr[] = {1,2,3,4};
	int n = 4;
	vector<int> ds;
	printf(0,ds,arr,n);
}
