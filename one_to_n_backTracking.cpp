#include<iostream>
using namespace std;

void print(int n);

int main() {
	// print name n times using recursion
	int n = 5;
	print(n);
	return 0;
}

void print(int n) {
	if(n<1){
		return;
	}
	print(n-1);
	cout << n << " ";
}


Output : 1 2 3 4 5 
