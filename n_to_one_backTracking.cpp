#include<iostream>
using namespace std;

void print(int i, int n);

int main() {
	// print name n times using recursion
	int n = 5;
	print(1, n);
	return 0;
}

void print(int i, int n) {

	if(i>n){
		return;
	}
	print(i+1, n);
	cout << i << " ";
}


Output : 5 4 3 2 1
